#include <iostream>

using namespace std;

class Encapsulation {
    private:
        int a;
    
    public:
        void set(int x) {
            a = x;
        }
        int get() {
            return a;
        }
};

int main() {
    Encapsulation obj;
    obj.set(10);
    cout << obj.get() << endl;
    return 0;
}