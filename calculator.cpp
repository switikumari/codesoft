//codesoft intership
// Calculator by switi kumari
#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    // Get user input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Choose operation
    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    // Perform calculation based on user's choice
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Cannot divide by zero." << endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            cout << "Invalid operation." << endl;
            return 1; // Exit with an error code
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}