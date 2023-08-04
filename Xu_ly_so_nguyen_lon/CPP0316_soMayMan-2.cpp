#include<bits/stdc++.h>
using namespace std;
bool check(string &s) {
    long long sum = 0; // Bi?n sum d? tính t?ng các ch? s? c?a s? nguyên
    int len = s.length() - 1; // Ð? dài c?a xâu s
    for (int i = 0; i < len; i++) {
        sum += s[i] - '0'; // C?ng giá tr? c?a ch? s? t?i v? trí i vào sum
    }
    // N?u t?ng các ch? s? khác 0 và chia h?t cho 9, t?c là s? may m?n, tr? v? true, ngu?c l?i tr? v? false
    return (sum && sum % 9 == 0);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
    return 0;
}
