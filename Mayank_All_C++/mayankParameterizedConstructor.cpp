#include <iostream>

using namespace std;

class MyClass {
    public:
        int num;
        string name;
        MyClass(int x, string y) {
            num = x;
            name = y;
        }
};

int main() {
    MyClass myObj(10, "Mayank");
    cout << myObj.num << " " << myObj.name << endl;
    return 0;
}