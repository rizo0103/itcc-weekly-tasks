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

int checkH(int a, int b) {
    if (b > a) {
        int first = a * 2, second = a * 4, third = a * 8, mn = INT_MAX, result = 0;
        
        if (abs(b - first) <= mn) {
            mn = abs(b - first);
            result = 2;
        } 
        
        if (abs(b - second) <= mn) {
            mn = abs(b - second);
            result = 4;
        } 
        
        if (abs(b - third) <= mn) {
            mn = abs(b - third);
            result = 8;
        }

        return result;
    } else {
        return -1;
    }
}

int checkL(int a, int b) {
    if (a > b) {
        int first = -1, second = -1, third = -1, mn = INT_MAX, result = 0;

        if (a % 2 == 0) {
            first = a / 2;
        }

        if (a % 4 == 0) {
            second = a / 4;
        }

        if (a % 8 == 0) {
            third = a / 8;
        }

        if (first != -1) {
            if (abs(b - first) <= mn) {
                mn = abs(b - first);
                result = 2;
            }
        }

        if (second != -1) {
            if (abs(b - second) <= mn) {
                mn = abs(b - second);
                result = 4;
            }
        }

        if (third != -1) {
            if (abs(b - third) <= mn) {
                mn = abs(b - third);
                result = 8;
            }
        }

        return result;
    } else {
        return -1;
    } 
}

void solve() {
    int a, b, cnt = 0, prev = 0;

    cin >> a >> b;

    while (a < b) {
        if (checkH(a, b) != -1) {
            a *= checkH(a, b);
            ++cnt;
        } else {
            break;
        }
    }

    if (a == b) {
        cout << cnt << '\n';
        
        return ;
    }

    while (a > b) {
        if (checkL(a, b) > 0) {
            a /= checkL(a, b);
            ++cnt;
        } else {
            break;
        }
    }

    if (a == b) {
        cout << cnt << '\n';
    } else {
        cout << -1 << '\n';
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

