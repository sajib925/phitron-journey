#include <iostream>
#include <vector>

const int MOD = 998244353;

using namespace std;

int main() {
    int k;
    cin >> k;

    string s, t;
    cin >> s >> t;

    int n = 1 << k;

    vector<vector<int>> dp(n, vector<int>(n, 0));

    dp[0][0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] == 0) continue;

            for (int l = 0; l < 2; l++) {
                int ni = (i << 1) | l;
                int nj = (j << 1) | (l ^ 1);

                if (ni < n && nj < n) {
                    dp[ni][nj] = (dp[ni][nj] + dp[i][j]) % MOD;
                }
            }
        }
    }

    int result = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (__builtin_popcount(i) == k && __builtin_popcount(j) == k) {
                bool valid = true;
                for (int l = 0; l < k; l++) {
                    if ((s[l] != '?' && s[l] - '0' != ((i >> (k - l - 1)) & 1)) ||
                        (t[l] != '?' && t[l] - '0' != ((j >> (k - l - 1)) & 1))) {
                        valid = false;
                        break;
                    }
                }
                if (valid) {
                    result = (result + dp[i][j]) % MOD;
                }
            }
        }
    }

    cout << result << endl;

    return 0;
}
