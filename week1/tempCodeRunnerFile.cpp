#include <bits/stdc++.h>
using namespace std;

class vocabulary {
    public:
        int key;
        int value;
};

int main() {
    int s, i = 0, cnt = 0;
    vocabulary coins[] = {
        {50, 0},
        {25, 0},
        {10, 0},
        {5, 0},
        {1, 0}
    };

    cin >> s;

    while (s > 0) {
        for (int j = 0; j < s / coins[i].key; ++j) {
            ++coins[i].value;
            ++cnt;
        }
        s %= coins[i].key;
        ++i;
    }

    cout << "\n<-----Answer----->\n";
    cout << cnt << '\n';
    for (int it = 0; it < 5; ++it) {
        for (int j = 0; j < coins[it].value; ++j) {
            cout << coins[it].key << ' ';
        }
    }
    return 0;
}

