#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > 0) {
        cout << "The first number is positive" << endl;

        if (num2 > 0) {
            cout << "The second number is also positive";
        } else if (num2 < 0) {
            cout << "The second number is negative";
        } else {
            cout << "The second number is zero";
        }

    } else if (num1 < 0) {
        cout << "The first number is negative" << endl;

        if (num2 > 0) {
            cout << "The second number is positive";
        } else if (num2 < 0) {
            cout << "The second number is also negative";
        } else {
            cout << "The second number is zero";
        }

    } else {
        cout << "The first number is zero" << endl;

        if (num2 > 0) {
            cout << "The second number is positive";
        } else if (num2 < 0) {
            cout << "The second number is negative";
        } else {
            cout << "The second number is also zero";
        }
    }

    return 0;
}