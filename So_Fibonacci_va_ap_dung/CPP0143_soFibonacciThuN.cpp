#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> inputs;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        inputs.push_back(n);
    }

    vector<long long> fib(93);
    fib[1] = 1;
    fib[2] = 1;
    for (int i = 3; i <= 92; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < t; i++) {
        int n = inputs[i];
        cout << fib[n] << "\n";
    }

    return 0;
}

