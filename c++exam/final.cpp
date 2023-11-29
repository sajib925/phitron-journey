// Problem Statement --1

// You will be given two strings S and X. You need to replace all X from string S with a '#' sign.

// Input Format

// First line will contain T, the number of test cases.
// Next T lines will contain a line with S and X.
// Constraints

// 1 <= T <= 1000
// 1 <= |S|, |X| <= 1000
// |X| <= |S|
// Output Format

// For each test cases output the modified string S.
// Sample Input 0

// 2
// rahimisagoodguy good
// canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you
// Sample Output 0

// rahimisa#guy
// can#tellmewhereicanfindheriwillbegreatefulto#if#tellmetheanswer


#include <bits/stdc++.h>


using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        string s, x;
        cin >> s >> x;

        int pos = 0;
        while ((pos = s.find(x)) != -1) {
            s.replace(pos, x.length(), "#");
        }

        cout << s << endl;
    }

    return 0;
}



// Problem Statement-- 2

// Write a program to determine if a given string contains the word "Jessica." If the word is present in the string, the program should output "YES," otherwise it should output "NO."

// NOTE: You need to find only "Jessica"; not "jessica" or "JeSsica" or any other form. Words are separated by spaces.

// Input Format

// Input will contain a string S containing names. There is a space in between two names.
// Constraints

// 1 <= |S| <= 1000; Here |S| means the length of the string.
// Output Format

// Output YES or NO according to the question.
// Sample Input 0

// Rahat Rifat Sakib Asif Sifat Jessica Ratul Munna
// Sample Output 0

// YES
// Sample Input 1

// Rahat Rifat Sakib Asif Sifat Ratul Munna
// Sample Output 1

// NO
// Sample Input 2

// Rahat Rifat Sakib Asif jessica Sifat Ratul Munna
// Sample Output 2

// NO
// Sample Input 3

// Rahat Rifat Sakib Asif Jessicarvai Sifat Ratul Munna
// Sample Output 3

// NO

#include <bits/stdc++.h>


using namespace std;


int main() {
    string a;
    getline(cin, a);

    stringstream ss(a);
    string s;

    int flag = 0;

    while (ss >> s) {
        if (s == "Jessica") {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}





// Problem Statement--3

// You will be given data for N students, where each student will have a name (nm), class (cls), section (s) and student ID (id). The Headmaster decided to change the sections of the students. He wants to reverse their sections. Now he needs your help to do so.

// Your task is reverse their section and print all the students data. That means the section of the first student will be replaced by the section of the last student, the section of the second student will be replaced by the section of the second last student and so on. See the sample input and output for more clarifications.

// Input Format

// First line will contain N.
// Next N lines will contain nm, cls, s, and id respectively.
// Constraints

// 1 <= N <= 100
// 1 <= |nm| <= 100 and will contain only English alphabets.
// 1 <= cls <= 10
// 'A' <= s <= 'Z'
// 1 <= id <= 100
// Output Format

// Output all the students data after reversing their section.
// Sample Input 0

// 3
// Rakib 7 B 90
// Sakib 10 A 85
// Ahsan 9 C 36
// Sample Output 0

// Rakib 7 C 90
// Sakib 10 A 85
// Ahsan 9 B 36
// Sample Input 1

// 4
// Munna 8 D 10
// Shojoy 9 E 11
// Asif 10 C 12
// Joy 9 G 13
// Sample Output 1

// Munna 8 G 10
// Shojoy 9 C 11
// Asif 10 E 12
// Joy 9 D 13





#include <bits/stdc++.h>


using namespace std;


class Student {
    public:
    
        string nm;
        int cls;
        char s;
        int id;
};

int main() {
    int n;
    cin >> n;

    Student students[n];
    
    for(Student &x : students){
        cin >> x.nm >> x.cls >> x.s >> x.id;
    }
    

    for (int i = 0; i < n / 2; i++) {
        swap(students[i].s, students[n - i - 1].s);
    }
    
    for(Student &x : students){
        cout << x.nm << " " << x.cls << " " << x.s << " " << x.id << endl;
    }

    return 0;
}






// Problem Statement---4

// You will be given data for N students, where each student will have a name (nm), class (cls), section (s), student ID (id), math marks (math_marks), and English marks (eng_marks).

// Your task is to sort the students data according to the total marks (sum of math_marks and eng_marks) in descending order. If multiple student have the same total marks then sort them according to the id in ascending order as the id will be unique.

// Input Format

// First line will contain N.
// Next N lines will contain nm, cls, s, id, math_marks and eng_marks respectively.
// Constraints

// 1 <= N <= 100
// 1 <= |nm| <= 100 and will contain only English alphabets.
// 1 <= cls <= 10
// 'A' <= s <= 'Z'
// 1 <= id <= 1000
// 0 <= math_marks, eng_marks <= 100
// Output Format

// Output the students data in descending order according to the total marks.
// Sample Input 0

// 5
// Munna 8 D 25 50 30
// Shojoy 9 E 26 40 50
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Bijoy 7 E 29 68 99
// Sample Output 0

// Bijoy 7 E 29 68 99
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Shojoy 9 E 26 40 50
// Munna 8 D 25 50 30
// Sample Input 1

// 6
// Munna 8 D 30 50 40
// Shojoy 9 E 25 40 50
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Bijoy 7 E 29 68 99
// Khadija 8 E 26 40 50
// Sample Output 1

// Bijoy 7 E 29 68 99
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Shojoy 9 E 25 40 50
// Khadija 8 E 26 40 50
// Munna 8 D 30 50 40


#include <bits/stdc++.h>

using namespace std;


class Student {
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math;
        int eng;
        int total;
};

bool cmp(Student &a, Student &b) {
    if (a.total == b.total) {
        return a.id < b.id; 
    }
    return a.total > b.total; 
}

int main() {
    int n;
    cin >> n;

    Student students[n];
    
      for(Student &x : students){
        cin >> x.nm >> x.cls >> x.s >> x.id >> x.math >> x.eng;
        x.total = x.math + x.eng;
      }

    sort(students, students + n, cmp);
    
    for(Student &x : students){
         cout << x.nm << " " << x.cls << " " << x.s << " " << x.id << " " << x.math << " " << x.eng << endl;
      }

    return 0;
}




// Problem Statement---5

// You will be given data for N students, where each student will have a name (nm), class (cls), section (s), student ID (id), math marks (math_marks), and English marks (eng_marks).

// Your task is to sort the students data according to the eng_marks in descending order. If multiple student have the same eng_marks then sort them according to the math_marks in descending order. If multiple student have the same math_marks then sort them accoding to the id in ascending order as the id will be unique.

// Input Format

// First line will contain N.
// Next N lines will contain nm, cls, s, id, math_marks and eng_marks respectively.
// Constraints

// 1 <= N <= 1000
// 1 <= |nm| <= 100 and will contain only English alphabets.
// 1 <= cls <= 10
// 'A' <= s <= 'Z'
// 1 <= id <= 10^9
// 0 <= math_marks, eng_marks <= 100
// Output Format

// Output the data in sorted order as instructed.
// Sample Input 0

// 6
// akib 2 R 1001 32 53
// rakib 1 E 1002 93 97
// sakib 8 M 1003 34 88
// bokib 3 Q 1004 93 58
// jessica 4 F 1005 94 88
// noname 8 R 1006 17 61
// Sample Output 0

// rakib 1 E 1002 93 97
// jessica 4 F 1005 94 88
// sakib 8 M 1003 34 88
// noname 8 R 1006 17 61
// bokib 3 Q 1004 93 58
// akib 2 R 1001 32 53
// Sample Input 1

// 6
// akib 2 R 1001 32 53
// rakib 1 E 1002 94 88
// sakib 8 M 1003 34 88
// bokib 3 Q 1004 93 58
// jessica 4 F 1005 94 88
// noname 8 R 1006 17 61
// Sample Output 1

// rakib 1 E 1002 94 88
// jessica 4 F 1005 94 88
// sakib 8 M 1003 34 88
// noname 8 R 1006 17 61
// bokib 3 Q 1004 93 58
// akib 2 R 1001 32 53





#include <bits/stdc++.h>

using namespace std;


class Student {
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math;
        int eng;
        int total;
};

bool cmp(Student &a, Student &b) {
    if (a.total == b.total) {
        return a.id < b.id; 
    }
    return a.total > b.total; 
}

int main() {
    int n;
    cin >> n;

    Student students[n];
    
      for(Student &x : students){
        cin >> x.nm >> x.cls >> x.s >> x.id >> x.math >> x.eng;
        x.total = x.math + x.eng;
      }

    sort(students, students + n, cmp);
    
    for(Student &x : students){
         cout << x.nm << " " << x.cls << " " << x.s << " " << x.id << " " << x.math << " " << x.eng << endl;
      }

    return 0;
}