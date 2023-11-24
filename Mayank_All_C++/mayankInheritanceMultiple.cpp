#include <iostream>

using namespace std;

class Student {
    protected:
    int roll_no;
    char name[20];
};

class Exam_inherit {
    protected:
    int sub1, sub2, sub3;
};

class Grade : public Student, public Exam_inherit {
    private:
    int avg;

    public:
    int total;

    void input() {
        cout << "Enter roll no: ";
        cin >> roll_no;
        cout << "Enter name:";
        cin >> name;
    }

    void display() {
        cout << "Roll no is: " << roll_no << endl;
        cout << "Name is: " << name << endl;
    }

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

    void average() {
        avg = total / 3;
        cout << "Average is: " << avg << endl;
    }
};

int main() {
    Grade gd;
    gd.input();
    gd.input_exam();
    gd.display();
    gd.display_exam();
    gd.average();
    return 0;
}