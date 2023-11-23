#include <iostream>

using namespace std;

int main() {
    int arr[2][3];

    cout << "Enter the values of the array:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The values of the array are:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << endl;
        }
    }

    return 0;
}