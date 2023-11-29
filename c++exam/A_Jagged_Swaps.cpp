
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool possible = false;
        for (int i = 1; i < n - 1; ++i) {
            if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
