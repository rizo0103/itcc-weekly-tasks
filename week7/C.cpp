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

ld C(int n) {
    return (n * (n - 1)) / 2.0;
}

void solve() {
    ld a, b;

    cin >> a >> b;

    if (a == b) {
        cout << "0 0\n";
        return ;
    }

    int kMin = 0, kMax = C(a - (b - 1)), sum = 0, div = round(a / b);
    bool flag = false;

    sum = div * b;

    if (sum > a) {
        kMin += C(div - 1) * (sum - a);
        kMin += C(div) * (b - (sum - a));
    } else if (sum < a) {
        kMin += C(div + 1) * (a - sum);
        kMin += C(div) * (b - (a - sum));
    } else {
        kMin += C(div) * b;
    }

    cout << kMin << ' ' << kMax << '\n';
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
