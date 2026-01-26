// Add, Subtraction, Multiplication, Division, Remainder.
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    while (true) {
        cout << "\nEnter first number: ";
        cin >> num1;

        cout << "Enter operator: ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;

        switch (op) {
            case '+':
                cout << "Result = " << num1 + num2;
                break;
            case '-':
                cout << "Result = " << num1 - num2;
                break;
            case '*':
                cout << "Result = " << num1 * num2;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result = " << num1 / num2;
                else
                    cout << "Error: Division by zero!";
                break;
            case '%':
                if ((int)num2 != 0)
                    cout << "Remainder = " << (int)num1 % (int)num2;
                else
                    cout << "Error: Division by zero!";
                break;
            default:
                cout << "Wrong operator entered. Calculator stopped.";
                return 0; 
        }
    }
}
