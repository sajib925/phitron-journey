#include <bits/stdc++.h>
using namespace std;

int min_operations(int n, int a[]) {
    int even = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            even++;
        }
    }

    int odd = n - even;


    if (even == odd) {
        return 0;
    } else if (abs(even - odd) % 2 == 0) {
        return abs(even - odd) / 2;
    } else {
        return -1;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }

        int result = min_operations(n, a);
        cout << result << endl;
    }
    
    return 0;
}