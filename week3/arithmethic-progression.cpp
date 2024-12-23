#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n, d = 0;

    cin >> a >> b >> n;

    d = b - a;

    cout << a + (n - 1) * d << '\n';
}
