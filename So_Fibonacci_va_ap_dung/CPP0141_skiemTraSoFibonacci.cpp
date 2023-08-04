#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(long long n) {
    long long sqrtN = sqrt(n);
    return (sqrtN * sqrtN == n);
}

bool isFibonacci(long long n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long n;
        cin >> n;

        if (isFibonacci(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

