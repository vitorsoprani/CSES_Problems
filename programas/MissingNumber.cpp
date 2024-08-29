#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
ll current_n;

int main() {
    cin >> n;

    ll numbers[n];

    for (int i = 0; i < n; i++) {
        numbers[i] = 0;
    }

    for (int i = 0; i < n - 1; i++) {
        cin >> current_n;
        numbers[current_n] = current_n;
    }

    for (int i = 1; i < n; i++) {
        if (numbers[i] == 0) {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}