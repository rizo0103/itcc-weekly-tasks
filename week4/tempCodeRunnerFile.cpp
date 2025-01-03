#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string str, newStr = "";

    cin >> n >> str;

    // for (char ch : str) {
    //     if (ch != ' ') {
    //         newStr += ch;
    //     }
    // }

    newStr.erase(n - 1, 1);

    cout << newStr << '\n';

    return 0;
}
