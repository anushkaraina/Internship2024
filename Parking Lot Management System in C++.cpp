#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

class Car {
public:
    string license_plate;
    string owner_name;
    string model;
    string color;

    Car(string lp, string on, string m, string c) 
        : license_plate(lp), owner_name(on), model(m), color(c) {}

    string getCarDetails() {
        return "Car " + license_plate + ", Owner: " + owner_name + ", Model: " + model + ", Color: " + color;
    }
};

class ParkingSpot {
public:
    int spot_id;
    int level;
    bool is_occupied;
    Car* car;

    ParkingSpot(int id, int lvl) : spot_id(id), level(lvl), is_occupied(false), car(nullptr) {}

    bool isAvailable() {
        return !is_occupied;
    }

    bool parkCar(Car* c) {
        if (isAvailable()) {
            car = c;
            is_occupied = true;
            return true;
        }
        return false;
    }

    Car* removeCar() {
        if (!isAvailable()) {
            Car* c = car;
            car = nullptr;
            is_occupied = false;
            return c;
        }
        return nullptr;
    }
};

class ParkingLot {
public:
    string name;
    string address;
    int total_spots;
    int available_spots;
    vector<ParkingSpot> parking_spots;
    int levels;

    ParkingLot(string n, string addr, int total, int lvl) 
        : name(n), address(addr), total_spots(total), available_spots(total), levels(lvl) {
        for (int i = 0; i < levels; i++) {
            for (int j = 0; j < total_spots / levels; j++) {
                parking_spots.push_back(ParkingSpot(j, i));
            }
        }
    }

    ParkingSpot* findAvailableSpot() {
        for (auto &spot : parking_spots) {
            if (spot.isAvailable()) {
                return &spot;
            }
        }
        return nullptr;
    }

    bool parkCar(Car* c) {
        ParkingSpot* spot = findAvailableSpot();
        if (spot && spot->parkCar(c)) {
            available_spots--;
            return true;
        }
        return false;
    }

    bool removeCar(Car* c) {
        for (auto &spot : parking_spots) {
            if (spot.car == c) {
                if (spot.removeCar()) {
                    available_spots++;
                    return true;
                }
            }
        }
        return false;
    }

    string getParkingStatus() {
        return "Parking Lot " + name + ": " + to_string(available_spots) + "/" + to_string(total_spots) + " spots available";
    }
};

class Ticket {
public:
    int ticket_id;
    Car* car;
    ParkingSpot* parking_spot;
    time_t entry_time;
    time_t exit_time;
    float fee;

    Ticket(int id, Car* c, ParkingSpot* ps, time_t entry) 
        : ticket_id(id), car(c), parking_spot(ps), entry_time(entry), exit_time(0), fee(0.0) {}

    void closeTicket(time_t exit) {
        exit_time = exit;
        calculateFee();
    }

    void calculateFee() {
        if (exit_time != 0) {
            double duration = difftime(exit_time, entry_time) / 3600;
            fee = static_cast<float>(duration) * 2.5;  // Assume $2.5 per hour
        }
    }
};

// Example Usage
int main() {
    Car car1("ABC123", "Anushka Raina", "Toyota Camry", "Blue");
    ParkingLot parking_lot("Main Street Parking", "123 Main St", 100, 5);

    if (parking_lot.parkCar(&car1)) {
        time_t entry_time = time(nullptr);
        Ticket ticket(1, &car1, parking_lot.findAvailableSpot(), entry_time);
        cout << "Car parked: " << car1.getCarDetails() << endl;
        cout << parking_lot.getParkingStatus() << endl;

        // Simulate car leaving after 3 hours
        time_t exit_time = entry_time + 3 * 3600;
        ticket.closeTicket(exit_time);
        parking_lot.removeCar(&car1);
        cout << "Car removed: " << car1.getCarDetails() << endl;
        cout << "Parking fee: $" << ticket.fee << endl;
        cout << parking_lot.getParkingStatus() << endl;
    } else {
        cout << "No available spots" << endl;
    }

    return 0;
}

