#include <iostream>
#include <vector>
using namespace std;

long long calculateSum(int N) {
    return (long long) N * (N + 1) / 2;
}

int main() {
    int T;
    cin >> T;

    vector<int> inputs(T);
    for (int i = 0; i < T; ++i) {
        cin >> inputs[i];
    }

    for (int i = 0; i < inputs.size(); i++) {
        long long sum = calculateSum(inputs[i]);
        cout << sum << endl;
    }

    return 0;
}

