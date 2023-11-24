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
        MyClass(const MyClass &obj) {
            num = obj.num;
            name = obj.name;
        }
};

int main() {
    MyClass myObj(10, "Mayank");
    MyClass myObj2 = myObj;
    cout << myObj2.num << " " << myObj2.name << endl;
    return 0;
}