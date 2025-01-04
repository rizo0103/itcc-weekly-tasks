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

    string s;
    unordered_map < string, int > mp;
    vector < string > ans;

    for (int i = 0; i < n; ++i) {
        cin >> s;

        if (mp[s]) {
            ans.pb(s + to_string(mp[s]));
        } else {
            ans.pb("OK");
        }

        ++mp[s];

    }

    for (auto i : ans) {
        cout << i << '\n';
    }

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
