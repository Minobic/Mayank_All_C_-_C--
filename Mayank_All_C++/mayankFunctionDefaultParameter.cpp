#include <iostream>

using namespace std;

int sum(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main() {
    cout << "The sum of 3, 7 is " << sum(3, 7) << endl;
    cout << "The sum of 3, 7, 9 is " << sum(3, 7, 9) << endl;
    cout << "The sum of 3, 7, 9, 11 is " << sum(3, 7, 9, 11) << endl;
    return 0;
}