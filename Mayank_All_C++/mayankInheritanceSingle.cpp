#include <iostream>

using namespace std;

class Student {
    private:
    int roll_no;
    char name[20];

    public:
    void input() {
        cout << "Enter roll no: ";
        cin >> roll_no;
        cout << "Enter Name: ";
        cin >> name;
    }
    void display() {
        cout << "Roll no is: " << roll_no << endl;
        cout << "Name is: " << name << endl;
    }
};

class exam_inherit : public Student {
    private:
    int sub1, sub2, sub3, total;

    public:
    void input_exam() {
        cout << "Enter marks of subject1: ";
        cin >> sub1;
        cout << "Enter marks of subject2: ";
        cin >> sub2;
        cout << "Enter marks of subject3: ";
        cin >> sub3;
    }

    void display_exam() {
        total = sub1 + sub2 + sub3;
        cout << "Total is: " << total << endl;
    }
};

int main() {
    exam_inherit ex;
    ex.input();
    ex.input_exam();
    ex.display();
    ex.display_exam();
    return 0;
}