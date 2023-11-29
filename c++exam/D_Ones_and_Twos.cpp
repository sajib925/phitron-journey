#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        unordered_set<int> prefixSum;

        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
            prefixSum.insert(sum);
        }

        while (q--) {
            int op;
            cin >> op;

            if (op == 1) {
                int s;
                cin >> s;

                if (prefixSum.count(s) > 0) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            } else {
                int i, v;
                cin >> i >> v;
                i--;

                sum += (v - a[i]);
                prefixSum.insert(sum);
                a[i] = v;
            }
        }
    }

    return 0;
}
