#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll EncontraNX(ll x) {
    if (x % 2 == 0) {
        return EncontraNX(x - 1) + 1;
    }
    return x * x;
}

ll EncontraNY(ll y) {
    if (y % 2 == 0) {
        return y * y;
    }
    return EncontraNY(y - 1) + 1;
}

int t;
ll x, y, n;

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> y >> x;

        if (y < x) {
            n = EncontraNX(x);
            if (n % 2 == 0) {
                n += y - 1;
            } else {
                n -= y - 1;
            }
        } else {
            n = EncontraNY(y);
            if (n % 2 == 0) {
                n -= x - 1;
            } else {
                n += x - 1;
            }
        }
        cout << n << "\n";
    }
    return 0;
}