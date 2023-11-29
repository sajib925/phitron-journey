#include <bits/stdc++.h>
using namespace std;

void print_character(int n, char c) {
    for (int i = 0; i < n; ++i) {
        cout << c << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        
        print_character(n, c);
    }
    
    return 0;
}