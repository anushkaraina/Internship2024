#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sum, product;
    cout << "Enter the sum and product of two numbers: ";
    cin >> sum >> product;

    // Compute the discriminant to check if we have real roots
    int discriminant = sum * sum - 4 * product;

    // If the discriminant is negative, there are no real solutions
    if (discriminant < 0) {
        cout << "No real solutions exist" << endl;
        return 1;
    }

    // Use the quadratic formula to find the two numbers
    double number1 = (sum + sqrt(discriminant)) / 2.0;
    double number2 = (sum - sqrt(discriminant)) / 2.0;

    // Print the numbers in ascending order
    if (number1 < number2) {
        cout << "The numbers are: " << number1 << " and " << number2 << endl;
    } else {
        cout << "The numbers are: " << number2 << " and " << number1 << endl;
    }

    return 0;
}
