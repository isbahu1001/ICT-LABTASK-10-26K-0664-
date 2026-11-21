#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int marks;

public:
    string name;

    void setMarks(int m) {
        if (m >= 0 && m <= 100)
            marks = m;
        else
            cout << "Invalid marks!" << endl;
    }

    int getMarks() {
        return marks;
    }

    char getGrade() {
        if (marks >= 80) return 'A';
        else if (marks >= 60) return 'B';
        else if (marks >= 50) return 'C';
        else return 'F';
    }
};

int main() {
    Student s;
    s.name = "Ayesha";

    s.setMarks(120);   // Invalid, prints message
    s.setMarks(85);    // Valid

    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.getMarks() << endl;
    cout << "Grade: " << s.getGrade() << endl;

    // Think: What happens if you write s.marks = 90; in main()?
    // Answer: It causes a compile-time error because 'marks' is a private
    // member. Private members can only be accessed inside the class's own
    // member functions, not directly from main(). We must use the public
    // setter setMarks() instead, which also validates the value.

    return 0;
}
