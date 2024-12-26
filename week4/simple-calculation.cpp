#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    int sum = 0, prod = 1;

    while (n) {
        sum += n % k;
        prod *= n % k;

        n /= k;
    }

    cout << prod - sum << '\n';

    return 0;
}