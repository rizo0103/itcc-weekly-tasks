#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;

    cin >> n >> m;

    vector < int > arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int cnt = 0;
    int left = 0, right = n - 1;

    while (left <= right) {
        if (arr[left] + arr[right] <= m) {
            ++cnt;
            ++left;
            --right;
        } else {
            ++cnt;
            --right;
        }
    }

    cout << cnt << '\n';

    return 0;
}
