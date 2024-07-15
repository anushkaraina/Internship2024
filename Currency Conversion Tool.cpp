#include <iostream>
using namespace std;

void rs_pd(double a){
    a = a * 0.0099;
    cout << a << " pounds" << endl;
}

void rs_usd(double a){
    a = a * 0.0133;
    cout << a << " USDollars" << endl;
}

void rs_yn(double a){
    a = a * 0.0933;
    cout << a << " yuan" << endl;
}

void pd_rs(double a){
    a = a * 101.35;
    cout << a << " rupees" << endl;
}

void pd_usd(double a){
    a = a * 1.35;
    cout << a << " USDollars" << endl;
}

void pd_yn(double a){
    a = a * 9.46;
    cout << a << " yuan" << endl;
}

void usd_rs(double a){
    a = a * 75.0;
    cout << a << " rupees" << endl;
}

void usd_pd(double a){
    a = a * 0.74;
    cout << a << " pounds" << endl;
}

void usd_yn(double a){
    a = a * 7.0;
    cout << a << " yuan" << endl;
}

void yn_rs(double a){
    a = a * 10.67;
    cout << a << " rupees" << endl;
}

void yn_pd(double a){
    a = a * 0.11;
    cout << a << " pounds" << endl;
}

void yn_usd(double a){
    a = a * 0.15;
    cout << a << " USDollars" << endl;
}

int main(){
    int currency, choice;
    double amount;

    while (1) {
        cout << "\n-----CHOOSE YOUR CURRENCY TYPE------" << endl;
        cout << "Enter 1 for Rupees\nEnter 2 for Pound\nEnter 3 for USDollars\nEnter 4 for Yuan\nEnter 0 to exit.\n";
        cin >> currency;

        if (currency == 0) {
            break;
        }

        cout << "Enter the amount: \n";
        cin >> amount;

        if (currency == 1) {
            cout << "CHOOSE IN WHICH CURRENCY YOU WANT TO CONVERT:\n";
            cout << "Enter 1 for Pound\nEnter 2 for USDollars\nEnter 3 for Yuans\n";
            cin >> choice;
            if (choice == 1) {
                rs_pd(amount);
            } else if (choice == 2) {
                rs_usd(amount);
            } else if (choice == 3) {
                rs_yn(amount);
            } else {
                cout << "Wrong Choice!!!" << endl;
            }
        } else if (currency == 2) {
            cout << "CHOOSE IN WHICH CURRENCY YOU WANT TO CONVERT:\n";
            cout << "Enter 1 for Rupees\nEnter 2 for USDollars\nEnter 3 for Yuans\n";
            cin >> choice;
            if (choice == 1) {
                pd_rs(amount);
            } else if (choice == 2) {
                pd_usd(amount);
            } else if (choice == 3) {
                pd_yn(amount);
            } else {
                cout << "Wrong Choice!!!" << endl;
            }
        } else if (currency == 3) {
            cout << "CHOOSE IN WHICH CURRENCY YOU WANT TO CONVERT:\n";
            cout << "Enter 1 for Rupees\nEnter 2 for Pound\nEnter 3 for Yuans\n";
            cin >> choice;
            if (choice == 1) {
                usd_rs(amount);
            } else if (choice == 2) {
                usd_pd(amount);
            } else if (choice == 3) {
                usd_yn(amount);
            } else {
                cout << "Wrong Choice!!!" << endl;
            }
        } else if (currency == 4) {
            cout << "CHOOSE IN WHICH CURRENCY YOU WANT TO CONVERT:\n";
            cout << "Enter 1 for Rupees\nEnter 2 for Pound\nEnter 3 for USDollars\n";
            cin >> choice;
            if (choice == 1) {
                yn_rs(amount);
            } else if (choice == 2) {
                yn_pd(amount);
            } else if (choice == 3) {
                yn_usd(amount);
            } else {
                cout << "Wrong Choice!!!" << endl;
            }
        } else {
            cout << "Wrong Choice!!!" << endl;
        }
    }

    return 0;
}
