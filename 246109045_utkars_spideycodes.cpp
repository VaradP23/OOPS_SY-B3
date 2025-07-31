#include <iostream>
using namespace std;
// SPIDEY CODES..
class student {
private:
    int admnno;
    char name[21];
    float english, math, science;
    float total;

    float ctotal() {
        return english + math + science;
    }

public:
    void takedata() {
        cout << "Enter Admission number: ";
        cin >> admnno;
        cout << "ENTER STUDENT NAME: ";
        cin.ignore(); 
        cin.getline(name, 21);
        cout << "ENTER MARKS IN ENGLISH: ";
        cin >> english;
        cout << "ENTER MARKS IN MATH: ";
        cin >> math;
        cout << "ENTER MARKS IN SCIENCE: ";
        cin >> science;
        total = ctotal();
    }

    void show() {
        cout << "ADMISSION NUMBER: " << admnno << endl;
        cout << "STUDENT NAME: " << name << endl;
        cout << "ENGLISH MARKS: " << english << endl;
        cout << "MATHS MARKS: " << math << endl;
        cout << "SCIENCE MARKS: " << science << endl;
        cout << "TOTAL MARKS: " << total << endl;
    }
};

int main() {
    student s;
    s.takedata();
    s.show();
    return 0;
}