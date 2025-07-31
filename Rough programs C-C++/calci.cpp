#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

const double PI = 3.14159265358979323846;

void displayMenu();
void performBasicArithmetic();
void performTrigonometricFunctions();
void performPowerAndRootFunctions();

int main(){
    int choice;
    do{
        displayMenu();
        cout << "Enter your choice --> ";
        cin >> choice;

        switch(choice){
            case 1:
                performBasicArithmetic();
                break;
            case 2:
                performTrigonometricFunctions();
                break;
            case 3:
                performPowerAndRootFunctions();
                break;
            case 4:
                break;
            case 5:
                performTrigonometricFunctions();
                break;
            case 6:
                cout << "\nExiting calculator. Goodbye!" << endl;
                break;
            default:
                cout << "\nInvalid choice>>>! please select between 1-6 "<<endl;
                break;
        }
        cout <<"\n==============================================\n" << endl;
    }
    while(choice != 6 );
return 0;
}

void displayMenu() {
    cout << "+--------------------------------------------+" << endl;
    cout << "|        Scientific Calculator Menu          |" << endl;
    cout << "+--------------------------------------------+" << endl;
    cout << "|                                            |" << endl;
    cout << "| 1. Basic Arithmetic (+, -, *, /)           |" << endl;
    cout << "| 2. Trigonometric Functions (sin, cos, tan) |" << endl;
    cout << "| 3. Power & Root Functions (x^y, sqrt)      |" << endl;
    cout << "| 4.                                         |" << endl;
    cout << "| 5.                                         |" << endl;
    cout << "| 6.Exit                                     |" << endl;
    cout << "|                                            |" << endl;
    cout << "+--------------------------------------------+" << endl;
}

void performBasicArithmetic() {
    char op;
    double num1, num2;

    cout << "\nEnter an operator (+, -, *, /): ";
    cin >> op;

    cout << "\nEnter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << "\nResult: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "\nResult: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "\nResult: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "\nResult: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "\nError: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "\nError: Invalid operator." << endl;
            break;
    }
}

void performTrigonometricFunctions() {
    int choice;
    double angle_degrees, angle_radians, result;

    cout << "\nSelect a trigonometric function:\n";
    cout << "1. sin\n";
    cout << "2. cos\n";
    cout << "3. tan\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << "\nEnter angle in degrees: ";
    cin >> angle_degrees;

    angle_radians = angle_degrees * PI / 180.0;

    switch (choice) {
        case 1:
            result = sin(angle_radians);
            cout << "\nResult: sin(" << angle_degrees << ") = " << result << endl;
            break;
        case 2:
            result = cos(angle_radians);
            cout << "\nResult: cos(" << angle_degrees << ") = " << result << endl;
            break;
        case 3:
            if (fmod(angle_degrees, 180) == 90) {
                 cout << "\nError: Tangent is undefined for " << angle_degrees << " degrees." << endl;
            } else {
                result = tan(angle_radians);
                cout << "\nResult: tan(" << angle_degrees << ") = " << result << endl;
            }
            break;
        default:
            cout << "\nError: Invalid choice." << endl;
            break;
    }
}

void performPowerAndRootFunctions() {
    int choice;
    double base, exponent, num;

    cout << "\nSelect a function:\n";
    cout << "\n1. Power (x^y)\n";
    cout << "2. Square Root (sqrt)\n";
    cout << "\nEnter your choice (1-2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the base (x): ";
            cin >> base;
            cout << "Enter the exponent (y): ";
            cin >> exponent;
            cout << "\nResult: " << base << " ^ " << exponent << " = " << pow(base, exponent) << endl;
            break;
        case 2:
            cout << "\nEnter a non-negative number: ";
            cin >> num;
            if (num < 0) {
                cout << "\nError: Cannot calculate the square root of a negative number." << endl;
            } else {
                cout << "\nResult: sqrt(" << num << ") = " << sqrt(num) << endl;
            }
            break;
        default:
            cout << "Error: Invalid choice." << endl;
            break;
    }
}
