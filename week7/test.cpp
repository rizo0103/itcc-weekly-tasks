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
    ld a, b;

    cin >> a >> b;

    int div = round(a / b), sum = 0;
    bool flag = false;

    for (int i = 0; i < b; ++i) {
        if (flag) {
            sum += div - 1;
            cout << div - 1 << ' ';
        } else {
            sum += div;
            cout << div << ' ';
        }

        if (sum + div >= a) {
            --sum;
            flag = true;
        }
    }
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
