#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    int a[n + 1], sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < n; ++i) {
        if (i < n / 2) {
            sum1 += a[i];
        } else {
            sum2 += a[i];
        }
    }

    cout << sum2 - sum1 << '\n';

    return 0;
}
