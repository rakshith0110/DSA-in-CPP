

#include <iostream>
#include <cmath> // For mathematical functions like sin, cos, log, sqrt, pow
#include <limits> // Used for numeric_limits

// Using the standard namespace to avoid prefixing with std::
using namespace std;

// Define PI for trigonometric calculations
const double PI = 3.14159265358979323846;

// --- Function Prototypes ---

// 1. Basic Arithmetic
void performBasicArithmetic();

// 2. Trigonometric Functions
void performTrigonometricFunctions();

// 3. Logarithmic Functions
void performLogarithmicFunctions();

// 4. Power and Root Functions
void performPowerAndRootFunctions();

// 5. Factorial
void performFactorial();
long long factorial(int n);

// Utility function to display the main menu
void displayMenu();

// --- Main Function ---
int main() {
    int choice;
    do {
        displayMenu();
        cout << "Enter your choice (1-6): ";

        // Input validation to ensure the user enters an integer
        while (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number (1-6): ";
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard bad input
        }


        switch (choice) {
            case 1:
                performBasicArithmetic();
                break;
            case 2:
                performTrigonometricFunctions();
                break;
            case 3:
                performLogarithmicFunctions();
                break;
            case 4:
                performPowerAndRootFunctions();
                break;
            case 5:
                performFactorial();
                break;
            case 6:
                cout << "Exiting calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option from the menu." << endl;
                break;
        }
        cout << "\n----------------------------------------\n" << endl;
    } while (choice != 6);

    return 0;
}

// --- Function Definitions ---

/**
 * @brief Displays the main menu of the calculator.
 */
void displayMenu() {
    cout << "===== Scientific Calculator Menu =====" << endl;
    cout << "1. Basic Arithmetic (+, -, *, /)" << endl;
    cout << "2. Trigonometric Functions (sin, cos, tan)" << endl;
    cout << "3. Logarithmic Functions (log, log10)" << endl;
    cout << "4. Power & Root Functions (x^y, sqrt)" << endl;
    cout << "5. Factorial (n!)" << endl;
    cout << "6. Exit" << endl;
    cout << "====================================" << endl;
}

/**
 * @brief Handles basic arithmetic operations: addition, subtraction,
 * multiplication, and division.
 */
void performBasicArithmetic() {
    char op;
    double num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }
}

/**
 * @brief Handles trigonometric functions: sine, cosine, and tangent.
 * Takes input in degrees and converts to radians for calculation.
 */
void performTrigonometricFunctions() {
    int choice;
    double angle_degrees, angle_radians, result;

    cout << "Select a trigonometric function:\n";
    cout << "1. Sine (sin)\n";
    cout << "2. Cosine (cos)\n";
    cout << "3. Tangent (tan)\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << "Enter angle in degrees: ";
    cin >> angle_degrees;

    // Convert degrees to radians for cmath functions
    angle_radians = angle_degrees * PI / 180.0;

    switch (choice) {
        case 1:
            result = sin(angle_radians);
            cout << "Result: sin(" << angle_degrees << "°) = " << result << endl;
            break;
        case 2:
            result = cos(angle_radians);
            cout << "Result: cos(" << angle_degrees << "°) = " << result << endl;
            break;
        case 3:
            // Tangent is undefined for 90, 270, etc. degrees.
            if (fmod(angle_degrees, 180) == 90) {
                 cout << "Error: Tangent is undefined for " << angle_degrees << " degrees." << endl;
            } else {
                result = tan(angle_radians);
                cout << "Result: tan(" << angle_degrees << "°) = " << result << endl;
            }
            break;
        default:
            cout << "Error: Invalid choice." << endl;
            break;
    }
}

/**
 * @brief Handles logarithmic functions: natural log (ln) and base-10 log (log10).
 */
void performLogarithmicFunctions() {
    int choice;
    double num;

    cout << "Select a logarithmic function:\n";
    cout << "1. Natural Log (ln)\n";
    cout << "2. Base-10 Log (log10)\n";
    cout << "Enter your choice (1-2): ";
    cin >> choice;

    cout << "Enter a positive number: ";
    cin >> num;

    if (num <= 0) {
        cout << "Error: Logarithms are only defined for positive numbers." << endl;
        return;
    }

    switch (choice) {
        case 1:
            cout << "Result: ln(" << num << ") = " << log(num) << endl;
            break;
        case 2:
            cout << "Result: log10(" << num << ") = " << log10(num) << endl;
            break;
        default:
            cout << "Error: Invalid choice." << endl;
            break;
    }
}

/**
 * @brief Handles power and square root functions.
 */
void performPowerAndRootFunctions() {
    int choice;
    double base, exponent, num;

    cout << "Select a function:\n";
    cout << "1. Power (x^y)\n";
    cout << "2. Square Root (sqrt)\n";
    cout << "Enter your choice (1-2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the base (x): ";
            cin >> base;
            cout << "Enter the exponent (y): ";
            cin >> exponent;
            cout << "Result: " << base << " ^ " << exponent << " = " << pow(base, exponent) << endl;
            break;
        case 2:
            cout << "Enter a non-negative number: ";
            cin >> num;
            if (num < 0) {
                cout << "Error: Cannot calculate the square root of a negative number." << endl;
            } else {
                cout << "Result: sqrt(" << num << ") = " << sqrt(num) << endl;
            }
            break;
        default:
            cout << "Error: Invalid choice." << endl;
            break;
    }
}

/**
 * @brief Handles the factorial calculation.
 */
void performFactorial() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
    } else if (n > 20) { // Factorial of 21 exceeds long long
        cout << "Error: Input too large. Factorial result will overflow." << endl;
    }
    else {
        cout << "Result: " << n << "! = " << factorial(n) << endl;
    }
}

/**
 * @brief Calculates the factorial of a number using recursion.
 * @param n The non-negative integer.
 * @return The factorial of n.
 */
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
