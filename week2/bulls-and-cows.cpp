#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < a.size(); ++i) {
        for (int j = 0; j < b.size(); ++j) {
            if (a[i] == b[j] && i != j) {
                ++cnt2;
            }
            if (a[i] == b[j] && i == j) {
                ++cnt1;
            }
        }
    }

    cout << cnt1 << ' ' << cnt2 << '\n';

    return 0;
}
