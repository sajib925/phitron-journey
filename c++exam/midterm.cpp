// Problem Statement ----1

// You will be given an array A of size N. Initially, you need to print the array by sorting it in ascending order. Afterward, you need to print the array sorted in descending order.

// Input Format

// First line will contain N.
// Next line will contain the array A.
// Constraints

// 1 <= N <= 10^5
// -10^9 <= A[i] <= 10^9 Where 0 <= i < N
// Output Format

// Print two lines. First line will contain the array sorted in ascending order. Next line will contain the array sorted in descending order.
// Sample Input 0

// 5
// 2 4 6 1 3
// Sample Output 0

// 1 2 3 4 6
// 6 4 3 2 1

#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;

    int a[n];

    int i = 0;
    while(i < n){
         cin >> a[i];
        i++;
    }

    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}



// Problem Statement ---- 2

// You will be given an array A and the size of that array N. You need to create a function named sort_it(). After taking the input for the size in main function, call that function by giving the size as parameter and take the array input inside that function. After that, you need to sort the array in descending order. Then, return that array from the function and receive it in the main function. Finally, print the sorted array in the main function.

// Input Format

// First line will contain N.
// Second line will contain the array A.
// Constraints

// 1 <= N <= 10^5
// -10^9 <= A[i] <= 10^9 Where 0 <= i < N
// Output Format

// Ouptut the array in descending order.
// Sample Input 0

// 5
// 1 4 2 3 5
// Sample Output 0

// 5 4 3 2 1


#include <bits/stdc++.h>

using namespace std;



int* sort_it(int n) {
    int* a = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n, greater<int>());

    return a;
}

int main() {
    int n;
    cin >> n;

    int* b = sort_it(n);

    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;

    delete[] b;

    return 0;
}


// Problem Statement: ---- 3

// Amena has just learned alphabets. She can read write from a to z only in lowercase. But, Amena always writes in alphabetic order (alphabetic order means from a to z in sorted order) what she saw. Also she writes a line as a word. For example, she writes monkey as ekmnoy. Her mother wants to test her reading and writing skills. Her mother gave her some lines, can you tell what she will write?

// Note: Input will be given by EOF.

// Input Format

// Input consist of a line S. The line will contain lowercase letters and spaces. It is possible that there are multiple spaces together and the line end with spaces.
// Constraints

// 1 <= |S| <= 10^5
// Output Format

// Output what Amena will write.
// Sample Input 0

// monkey
// i love flower
// Sample Output 0

// ekmnoy
// eefilloorvw


#include <bits/stdc++.h>

using namespace std;


int main() {
    int n = 100001; 
    char a[n];

    while (cin.getline(a, n)) {
        int b = 0;
        for (int i = 0; a[i] != '\0'; i++) {
            if (' ' != (a[i])) {
                a[b++] = a[i];
            }
        }
        a[b] = '\0';

        sort(a, a + b);

        cout << a << endl;
    }

    return 0;
}


// Problem Statement ---- 4

// A student has several pieces of information, such as a unique ID, name, section, and total marks. You will be given the information of three students. Your task is to determine and print the details of the student who achieved the highest total marks. In the case of a tie (i.e., two or more students having the same total marks), print the information of the student with the smaller ID.

// Input Format

// First line will contain T, the number of test cases.
// For each test case there will be 3 lines. Each line will contain - ID, Name, Section, Total Marks of a student. The name will contain lowercase English alphabets only.
// Constraints

// 1 <= T <= 1000
// 1 <= ID <= 3
// 1 <= |Name| <= 100
// 'A' <= Section <= 'Z'
// 0 <= Total Marks <= 100
// Output Format

// Ouptut the information as asked in the question.
// Sample Input 0

// 3
// 1 sakib A 50
// 2 rakib D 96
// 3 akib C 90
// 1 sakib A 50
// 2 rakib D 96
// 3 akib C 96
// 1 sakib A 50
// 2 rakib D 50
// 3 akib C 40
// Sample Output 0

// 2 rakib D 96
// 2 rakib D 96
// 1 sakib A 50

#include <bits/stdc++.h>

using namespace std;




class Student {
public:
    int id;
    char name[101]; 
    char section;
    int totalMarks;
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n = 3;
        Student stnd[n];

        for (int i = 0; i < n; i++) {
            cin >> stnd[i].id >> stnd[i].name >> stnd[i].section >> stnd[i].totalMarks;
        }

        int hMarks = -1;
        int hId = -1;

        for (int i = 0; i < n; i++) {
            if (stnd[i].totalMarks > hMarks) {
                hMarks = stnd[i].totalMarks;
                hId = i;
            }
        }

        cout << stnd[hId].id << " " << stnd[hId].name << " " << stnd[hId].section << " " << hMarks << endl;
    }

    return 0;
}


// Problem Statement: --- 5

// You will be given an array A and the size of that array N. Additionally, you will be given a sum S. Your task is to determine whether it is possible to select three distinct indexed values from the array such that their summation equals S.

// Input Format

// First line will contain T, the number of test cases.
// First line of each test case will contain N and S.
// Second line of each test case will contain the array A.
// Constraints

// 1 <= T <= 100
// 1 <= N <= 100
// 1 <= S <= 1000
// 1 <= A[i] <= 1000 Where 0 <= i < N
// Output Format

// Output "YES" if it is possible, otherwise output "NO".
// Sample Input 0


#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;

        int a[100]; 
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int flag = 0;

        for (int i = 0; i < n - 2 ; i++) {
            for (int j = i + 1; j < n - 1 ; j++) {
                for (int k = j + 1; k < n ; k++) {
                    if (a[i] + a[j] + a[k] == s) {
                        flag = 1;
                    }
                }
            }
        }

        if (flag == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}


// problem statement 4 two diffrent way


#include <bits/stdc++.h>

using namespace std;




class Student {
public:
    int id;
    char name[101]; 
    char section;
    int totalMarks;
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n = 3;
        Student stnd[n];

        for (int i = 0; i < n; i++) {
            cin >> stnd[i].id >> stnd[i].name >> stnd[i].section >> stnd[i].totalMarks;
        }

        int hMarks = -1;
        int hId = -1;

        for (int i = 0; i < n; i++) {
            if (stnd[i].totalMarks > hMarks || (stnd[i].totalMarks == hMarks && stnd[i].id < hId)) {
                hMarks = stnd[i].totalMarks;
                hId = stnd[i].id;
            }
        }

        cout << hId << " " << stnd[hId - 1].name << " " << stnd[hId - 1].section << " " << hMarks << endl;
    }

    return 0;
}



class Student {
public:
    int id;
    char name[101]; 
    char section;
    int totalMarks;
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n = 3;
        Student stnd[n];

        for (int i = 0; i < n; i++) {
            cin >> stnd[i].id >> stnd[i].name >> stnd[i].section >> stnd[i].totalMarks;
        }

        int hMarks = -1;
        int hId = -1;

        for (int i = 0; i < n; i++) {
            if (stnd[i].totalMarks > hMarks) {
                hMarks = stnd[i].totalMarks;
                hId = stnd[i].id;
            }
        }

        cout << hId << " " << stnd[hId - 1].name << " " << stnd[hId - 1].section << " " << hMarks << endl;
    }

    return 0;
}


#include <bits/stdc++.h>

using namespace std;




class Student {
public:
    int id;
    char name[101]; 
    char section;
    int totalMarks;
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n = 3;
        Student stnd[n];

        for (int i = 0; i < n; i++) {
            cin >> stnd[i].id >> stnd[i].name >> stnd[i].section >> stnd[i].totalMarks;
        }

        int hMarks = -1;
        int hId = -1;

        for (int i = 0; i < n; i++) {
            if (stnd[i].totalMarks > hMarks) {
                hMarks = stnd[i].totalMarks;
                hId = i;
            }
        }

        cout << stnd[hId].id << " " << stnd[hId].name << " " << stnd[hId].section << " " << hMarks << endl;
    }

    return 0;
}






