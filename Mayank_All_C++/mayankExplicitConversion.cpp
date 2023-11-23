#include <iostream>

using namespace std;

int main() {
    int a = 10;
    float b = 20.5;
    int c = static_cast<int>(a + b);

    cout << "The value of c is " << c << endl;

    return 0;
}