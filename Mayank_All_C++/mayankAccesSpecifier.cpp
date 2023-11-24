#include <iostream>

using namespace std;

class Employee {
    private:
        int a, b, c;    // These are not inheritable to the derived class
    protected:
        int d, e, f;    // These are inheritable to the derived class
    public:
        int g, h, i;
        void setData(int a1, int b1, int c1, int d1, int e1, int f1, int g1, int h1, int i1) {
            a = a1;
            b = b1;
            c = c1;
            d = d1;
            e = e1;
            f = f1;
            g = g1;
            h = h1;
            i = i1;
        }
        void getData() {
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
            cout << "The value of d is " << d << endl;
            cout << "The value of e is " << e << endl;
            cout << "The value of f is " << f << endl;
            cout << "The value of g is " << g << endl;
            cout << "The value of h is " << h << endl;
            cout << "The value of i is " << i << endl;
        }
};

int main() {
    Employee mayank;
    mayank.setData(1, 2, 3, 4, 5, 6, 7, 8, 9);
    mayank.getData();
    return 0;
}