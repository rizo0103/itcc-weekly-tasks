#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cnt = 0, i = 0;

    cin >> n;

    if (n == 1) {
        cout << "1\n";
        return 0;
    }

    while (cnt <= n) {
        ++i;
        cnt += i;
    }

    cout << i - 1 << '\n';

    return 0;
}