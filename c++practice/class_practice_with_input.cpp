#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[101];
    int roll;
    char section;
    int math_marks;
    int cls;
};

int main()
{
    
//amra jani getline diye input nile o enter soho niye fele tai inter ke fele dite amra getchar ke deke ani and getchar tokhon enter fele dey

    Student a,b;
    cin.getline(a.name, 101); 
    cin >> a.roll >> a.section >> a.math_marks >> a.cls;
    getchar();
    cin.getline(b.name, 101); 
    cin >> b.roll >> b.section >> b.math_marks >> b.cls;
    
    

    cout <<"Student Name:" << " " << a.name << endl <<"Student Roll:" << " " << a.roll << endl << "Student Section:" << " " << a.section << endl << "Student Math Marks:" << " " << a.math_marks << endl << "Student Class:" << " " << a.cls << endl;

    cout <<"Student Name:" << " " << b.name << endl <<"Student Roll:" << " " << b.roll << endl << "Student Section:" << " " << b.section << endl << "Student Math Marks:" << " " << b.math_marks << endl << "Student Class:" << " " << b.cls << endl;

    return 0;
}