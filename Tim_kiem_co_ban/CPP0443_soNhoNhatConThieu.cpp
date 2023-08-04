#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> A(n-1);
        for (int i = 0; i < n - 1; i++) {
            cin >> A[i];
        }
//mang mark co kich thuoc n+1 va tat ca cac phan tu bang 0, dung de danh dau cac phan tu trong mang A[]
        vector<int> mark(n+1, 0);
        for (int i = 0; i < n - 1; i++) {
            mark[A[i]] = 1;//duyet A[] va danh dau cac phan tu trong A[] bang cach gan mark[i] = 1
        }
//neu gap phan tu dau tien khong cos tong mang danh dau thi in gia tri do
        for (int i = 1; i <= n; i++) {
            if (mark[i] == 0) {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}

