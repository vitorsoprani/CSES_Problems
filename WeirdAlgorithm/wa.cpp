#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;

int main() {
    cin >> n;

    cout << n << " ";
    while (n != 1) {
        if (n % 2) {  //is odd
            n = n * 3 + 1;
        } else {    //is even
            n = n / 2;
        }

        cout << n << " ";
    }

    cout << "\n";

    return 0;
}