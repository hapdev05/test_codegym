#include <iostream>
using namespace std;
long long fibonacci(int n) {
    long long f[31];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (n > 30 || n < 1) {
        cout << "Vui long nhap n trong khoang tu 1 den 30!" << endl;
        return 0;
    }
    cout << "Day Fibonacci tu F(1) den F(" << n << ") la:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "F(" << i << ") = " << fibonacci(i) << endl;
    }
    
    return 0;
}