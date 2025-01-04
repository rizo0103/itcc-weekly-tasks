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
    int a, b, c;

    cin >> a >> b >> c;

    int v1 = a + b + c,
        v2 = a + b * c,
        v3 = a * b + c,
        v4 = a * b * c,
        v5 = (a + b) * c,
        v6 = a * (b + c);

    cout << max(v1, max(v2, max(v3, max(v4, max(v5, v6))))) << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio( false );
    cin.tie( nullptr );
    cout.tie( nullptr );

    int T = 1;

//    cin >> T;

    while (T --> 0) {
        solve();
    }

    return 0;
}
