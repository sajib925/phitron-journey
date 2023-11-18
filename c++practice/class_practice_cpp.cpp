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
    Student jhon;
    char temp[101] = "jhon dou";
    strcpy(jhon.name, temp);
    jhon.roll = 1;
    jhon.section = 'a';
    jhon.math_marks = 90;
    jhon.cls = 10;

    Student brav;
    char temp2[101] = "brav";
    strcpy(brav.name, temp2);
    brav.roll = 2;
    brav.section = 'a';
    brav.math_marks = 89;
    brav.cls = 10;
    

    cout <<"Student Name:" << " " << jhon.name << endl <<"Student Roll:" << " " << jhon.roll << endl << "Student Section:" << " " << jhon.section << endl << "Student Math Marks:" << " " << jhon.math_marks << endl << "Student Class:" << " " << jhon.cls << endl;

    cout <<"Student Name:" << " " << brav.name << endl <<"Student Roll:" << " " << brav.roll << endl << "Student Section:" << " " << brav.section << endl << "Student Math Marks:" << " " << brav.math_marks << endl << "Student Class:" << " " << brav.cls << endl;

    return 0;
}