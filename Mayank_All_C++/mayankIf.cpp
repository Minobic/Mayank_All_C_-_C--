#include <iostream>

using namespace std;

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive";
        cout << " It is an integer";
    }

    return 0;
}