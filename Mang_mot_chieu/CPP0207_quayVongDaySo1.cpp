#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int rotatedArray[n];

        for (int i = 0; i < n; i++) {
            int newIndex = (i - d + n) % n;
            rotatedArray[newIndex] = a[i]; // gan gia tri cua phan tu hien tao a[i] vao vi tri moi duoc tinh
        }

        for (int i = 0; i < n; i++) {
            cout << rotatedArray[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

