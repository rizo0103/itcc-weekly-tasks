#include <bits/stdc++.h>
#define int long long
using namespace std;

int fib(int n, int cahce[]) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (cahce[n] == 0) {
        int a = fib(n - 1, cahce);
        int b = fib(n - 2, cahce);

        cahce[n] = a + b;
    }

    return cahce[n];
}


int32_t main() {
    int n = 100, cahce[n + 1] = {0};

    cout << fib(n, cahce) << endl;
}
