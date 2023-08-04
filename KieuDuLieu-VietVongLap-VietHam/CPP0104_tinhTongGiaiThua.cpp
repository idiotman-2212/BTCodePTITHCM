#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

double calculateDistance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    int t;
    cin >> t;

    vector<double> x1(t);
    vector<double> y1(t);
    vector<double> x2(t);
    vector<double> y2(t);

    for (int i = 0; i < t; ++i) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    for (int i = 0; i < t; ++i) {
        double distance = calculateDistance(x1[i], y1[i], x2[i], y2[i]);
        cout << fixed << setprecision(4) << distance << endl;
    }

    return 0;
}

