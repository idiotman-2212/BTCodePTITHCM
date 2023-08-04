#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double distance(double xa, double ya, double xb, double yb) {
    return sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        double xa, ya, xb, yb;
        cin >> xa >> ya >> xb >> yb;

        double dist = distance(xa, ya, xb, yb);
        cout << fixed << setprecision(4) << dist << endl;
    }

    return 0;
}

