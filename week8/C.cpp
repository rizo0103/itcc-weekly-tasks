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
    int n, single = 0, multiple = 0;

    cin >> n;

    int arr[n + 1];
    map < int, int > mp;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    for (auto i : mp) {
        if (i.second > 1) {
            ++multiple;
        } else {
            ++single;
        }
    }

    cout << multiple + ceil(single / 2.0) << '\n'; 
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

