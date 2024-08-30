#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;
ll operationsNumber = 0;

int main() {
    //makes cin and cout fastter:
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    int vet[n];

    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }

    for (int i = 1; i < n; i++) {
        if (vet[i] < vet[i - 1]) {
            int diference = vet[i - 1] - vet[i];
            vet[i] = vet[i - 1];
            operationsNumber += (ll)diference;
        }
    }

    cout << operationsNumber << "\n";

    return 0;
}