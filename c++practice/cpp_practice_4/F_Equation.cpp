#include <bits/stdc++.h>

using namespace std;

long long power(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

long long calculate_equation(int X, int N) {
    long long result = 0;

    for (int i = 0; i <= N; i += 2) {
        result += power(X, i);
    }

    return result;
}

int main() {
    int X, N;
    cin >> X >> N;

    long long result = calculate_equation(X, N);

    cout << result << endl;

    return 0;
}
