#include <bits/stdc++.h>
using namespace std;

float divide(float a, float b) {
    if (b == 0) {
        cout << "Error: Division by zero" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int a, b, c, mid = 0;

    cin >> a >> b >> c;

    mid = ((a > b && a < c) || (a > c && a < b)) ? a : ((b > a && b < c) || (b > c && b < a)) ? b : c;

    cout << mid;
    
    return 0;
}
