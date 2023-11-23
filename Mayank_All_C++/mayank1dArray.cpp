#include <iostream>

using namespace std;

int main() {
    int arr[10];

    cout << "Enter the values of the array:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "The values of the array are:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}