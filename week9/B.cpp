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
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    if ((x2 >= y2 && x1 < y1) || (y2 >= x2 && x1 > y1)) {
        uNu;
    } else {
        uYu;
    }
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

