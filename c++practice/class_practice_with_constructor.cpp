#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(int r, char s, int m, int c) {
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main()
{
    

    Student a(4,'a', 88, 5);
    
    
    

    cout  <<"Student Roll:" << " " << a.roll << endl << "Student Section:" << " " << a.section << endl << "Student Math Marks:" << " " << a.math_marks << endl << "Student Class:" << " " << a.cls << endl;

    // cout <<"Student Roll:" << " " << b.roll << endl << "Student Section:" << " " << b.section << endl << "Student Math Marks:" << " " << b.math_marks << endl << "Student Class:" << " " << b.cls << endl;

    return 0;
}