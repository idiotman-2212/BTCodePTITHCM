#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N; 
    cin >> N;

    double S = 0.0; 

    for (int i = 1; i <= N; i++) {
        S += 1.0 / i;  
    }

    cout << fixed << setprecision(4) << S << endl;  

    return 0;
}

