#include <iostream>
#include <cmath>
#include <limits>

const double PI = 3.14159265358979323846;


void performBasicArithmetic();

void performTrigonometricFunctions();

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
        std::cout << "Enter your choice (1-6): ";

        // Input validation to ensure the user enters an integer
        while (!(std::cin >> choice)) {
            std::cout << "Invalid input. Please enter a number (1-6): ";
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard bad input
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
                std::cout << "Exiting calculator. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please select a valid option from the menu." << std::endl;
                break;
        }
        std::cout << "\n----------------------------------------\n" << std::endl;
    } while (choice != 6);

    return 0;
}

// --- Function Definitions ---

/**
 * @brief Displays the main menu of the calculator.
 */
void displayMenu() {
    std::cout << "===== Scientific Calculator Menu =====" << std::endl;
    std::cout << "1. Basic Arithmetic (+, -, *, /)" << std::endl;
    std::cout << "2. Trigonometric Functions (sin, cos, tan)" << std::endl;
    std::cout << "3. Logarithmic Functions (log, log10)" << std::endl;
    std::cout << "4. Power & Root Functions (x^y, sqrt)" << std::endl;
    std::cout << "5. Factorial (n!)" << std::endl;
    std::cout << "6. Exit" << std::endl;
    std::cout << "====================================" << std::endl;
}

/**
 * @brief Handles basic arithmetic operations: addition, subtraction,
 * multiplication, and division.
 */
void performBasicArithmetic() {
    char op;
    double num1, num2;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch (op) {
        case '+':
            std::cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operator." << std::endl;
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

    std::cout << "Select a trigonometric function:\n";
    std::cout << "1. Sine (sin)\n";
    std::cout << "2. Cosine (cos)\n";
    std::cout << "3. Tangent (tan)\n";
    std::cout << "Enter your choice (1-3): ";
    std::cin >> choice;

    std::cout << "Enter angle in degrees: ";
    std::cin >> angle_degrees;

    // Convert degrees to radians for cmath functions
    angle_radians = angle_degrees * PI / 180.0;

    switch (choice) {
        case 1:
            result = sin(angle_radians);
            std::cout << "Result: sin(" << angle_degrees << "°) = " << result << std::endl;
            break;
        case 2:
            result = cos(angle_radians);
            std::cout << "Result: cos(" << angle_degrees << "°) = " << result << std::endl;
            break;
        case 3:
            // Tangent is undefined for 90, 270, etc. degrees.
            if (fmod(angle_degrees, 180) == 90) {
                 std::cout << "Error: Tangent is undefined for " << angle_degrees << " degrees." << std::endl;
            } else {
                result = tan(angle_radians);
                std::cout << "Result: tan(" << angle_degrees << "°) = " << result << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid choice." << std::endl;
            break;
    }
}

/**
 * @brief Handles logarithmic functions: natural log (ln) and base-10 log (log10).
 */
void performLogarithmicFunctions() {
    int choice;
    double num;

    std::cout << "Select a logarithmic function:\n";
    std::cout << "1. Natural Log (ln)\n";
    std::cout << "2. Base-10 Log (log10)\n";
    std::cout << "Enter your choice (1-2): ";
    std::cin >> choice;

    std::cout << "Enter a positive number: ";
    std::cin >> num;

    if (num <= 0) {
        std::cout << "Error: Logarithms are only defined for positive numbers." << std::endl;
        return;
    }

    switch (choice) {
        case 1:
            std::cout << "Result: ln(" << num << ") = " << log(num) << std::endl;
            break;
        case 2:
            std::cout << "Result: log10(" << num << ") = " << log10(num) << std::endl;
            break;
        default:
            std::cout << "Error: Invalid choice." << std::endl;
            break;
    }
}

/**
 * @brief Handles power and square root functions.
 */
void performPowerAndRootFunctions() {
    int choice;
    double base, exponent, num;

    std::cout << "Select a function:\n";
    std::cout << "1. Power (x^y)\n";
    std::cout << "2. Square Root (sqrt)\n";
    std::cout << "Enter your choice (1-2): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Enter the base (x): ";
            std::cin >> base;
            std::cout << "Enter the exponent (y): ";
            std::cin >> exponent;
            std::cout << "Result: " << base << " ^ " << exponent << " = " << pow(base, exponent) << std::endl;
            break;
        case 2:
            std::cout << "Enter a non-negative number: ";
            std::cin >> num;
            if (num < 0) {
                std::cout << "Error: Cannot calculate the square root of a negative number." << std::endl;
            } else {
                std::cout << "Result: sqrt(" << num << ") = " << sqrt(num) << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid choice." << std::endl;
            break;
    }
}

/**
 * @brief Handles the factorial calculation.
 */
void performFactorial() {
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Error: Factorial is not defined for negative numbers." << std::endl;
    } else if (n > 20) { // Factorial of 21 exceeds long long
        std::cout << "Error: Input too large. Factorial result will overflow." << std::endl;
    }
    else {
        std::cout << "Result: " << n << "! = " << factorial(n) << std::endl;
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
