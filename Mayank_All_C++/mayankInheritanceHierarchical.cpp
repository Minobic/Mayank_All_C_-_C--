#include <iostream>

using namespace std;

class Student {
    protected:
    int roll_no;
    char name[20];
    int sub1;
    int sub2;
    int sub3;
    int total;
};

class Show : public Student {
    public:
    void input() {
        cout << "Enter roll no: ";
        cin >> roll_no;
        cout << "Enter name: ";
        cin >> name;
    }

    void display() {
        cout << "Roll no is: " << roll_no << endl;
        cout << "Name is: " << name << endl;
    }
};

class Exam : public Student {
    public:
    void input_exam() {
        cout << "Enter marks of subject1: ";
        cin >> sub1;
        cout << "Enter marks of subject2: ";
        cin >> sub2;
        cout << "Enter marks of subject3: ";
        cin >> sub3;
    }

    void total_marks() {
        total = sub1 + sub2 + sub3;
        cout << "Total is: " << total << endl;
    }
};

int main() {
    Student st;
    Show sw;
    Exam em;
    sw.input();
    em.input_exam();
    sw.display();
    em.total_marks();
    return 0;
}