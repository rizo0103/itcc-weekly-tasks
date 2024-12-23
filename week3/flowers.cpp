#include <bits/stdc++.h>
using namespace std;

int main() {
    string flowers = "GCV";
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        swap(flowers[1], flowers[2]);
        swap(flowers[0], flowers[1]);
    }

    cout << flowers << '\n';
    
    return 0;
}
