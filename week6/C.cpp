/** @author : asliddin2003 **/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define uYu cout<<"YES\n"
#define uNu cout<<"NO\n"
#define uyu cout<<"Yes\n"
#define unu cout<<"No\n"
#define ff first
#define ss second
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define INT_MAX LONG_LONG_MAX
#define INT_MIN LONG_LONG_MIN

const int N = 1e5 + 17;

void solve() {
    int n, k, mx = INT_MIN;

    cin >> n >> k;

    vector < int > arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int left = 0, right = 1e10, mid = 0;

    while (left < right) {
        mid = left + (right - left + 1) / 2;
        int total = 0;

        for (int i = 0; i < n; ++i) {
            total += max(0LL, mid - arr[i]);
        }

        if (total <= k) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }

    cout << left << '\n';

}

int32_t main() {
    ios_base::sync_with_stdio( false );
    cin.tie( nullptr );
    cout.tie( nullptr );

    int T = 1;

    cin >> T;

    while (T --> 0) {
        solve();
    }

    return 0;
}

