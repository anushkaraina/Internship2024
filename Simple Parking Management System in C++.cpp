#include<iostream>
using namespace std;

void park(int c) {
    switch(c) {
        case 1:
            cout << "Car Parked!!!" << endl;
            break;
        case 2:
            cout << "Bike Parked!!!" << endl;
            break;
        case 3:
            cout << "Rickshaw Parked!!!" << endl;
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Wrong choice" << endl;
            break;
    }
}

int main() {
    int choice, continueParking,cars=20,bikes=45,rickshaw=23;

    do {
        cout << "To park Car - Enter 1" << endl;
        cout << "To park Bike - Enter 2" << endl;
        cout << "To park Rickshaw - Enter 3" << endl;
        cout << "To Exit - Enter 0" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if(choice==1){
        	cars++;
		}
		else if(choice==2){
			bikes++;
		}
		else if(choice==3){
			rickshaw++;
		}

        park(choice);

        if (choice == 0) {
            break;
        }

        cout << "Do you want to park again? Enter 0 to exit or any other number to continue: ";
        cin >> continueParking;

        if (continueParking == 0) {
            break;
        }

    } while (true);
    
     cout << "Total number of parked vehicles:" << endl;
    cout << "Cars: " << cars << endl;
    cout << "Bikes: " << bikes << endl;
    cout << "Rickshaws: " << rickshaw << endl;

    return 0;
}
