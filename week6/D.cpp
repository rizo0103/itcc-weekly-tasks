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
    int n;

    cin >> n;

    int x, y, z, sum1 = 0, sum2 = 0, sum3 = 0;

    for (int i = 0; i < n; ++i) {
        cin >> x >> y >> z;
        sum1 += x;
        sum2 += y;
        sum3 += z;
    }

    (sum1 == 0 && sum2 == 0 && sum3 == 0) ? uYu : uNu;
}

int32_t main() {
    ios_base::sync_with_stdio( false );
    cin.tie( nullptr );
    cout.tie( nullptr );

    int T = 1;

    // cin >> T;

    while (T --> 0) {
        solve();
    }

    return 0;
}

