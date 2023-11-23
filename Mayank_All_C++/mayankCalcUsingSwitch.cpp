#include <iostream>

using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter the value of a:" << endl;
    cin >> a;

    cout << "Enter the value of b:" << endl;
    cin >> b;

    cout << "Enter the operator:" << endl;
    cin >> op;

    switch (op) {
        case '+':
            cout << "The sum of a and b is " << a + b << endl;
            break;
        case '-':
            cout << "The difference of a and b is " << a - b << endl;
            break;
        case '*':
            cout << "The product of a and b is " << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << "The division of a and b is " << a / b << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}