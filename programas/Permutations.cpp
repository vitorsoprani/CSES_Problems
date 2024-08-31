#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    cin >> n;

    if (n == 1) {
        cout << "1" << "\n";
    } else if (n <= 3) {
        cout << "NO SOLUTION\n";
    } else if (!(n % 2)) {
        for (int i = 1; i <= n / 2; i++) {
            cout << (n / 2) + i << " " << i << " ";
        }
        cout << "\n";
    } else {
        for (int i = 1; i <= (double)n / 2; i++) {
            cout << i << " " << (n / 2) + 1 + i << " ";
        }
        cout << n / 2 + 1 << "\n";
    }

    return 0;
}