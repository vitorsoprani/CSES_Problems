#include <bits/stdc++.h>
using namespace std;

int n = 0, nAtual = 0;

int main() {
    cin >> n;
    int vet[n];

    for (int i = 0; i < n; i++) {
        vet[i] = 0;
    }

    for (int i = 0; i < n - 1; i++) {
        cin >> nAtual;
        vet[nAtual - 1] = nAtual;
    }

    for (int i = 0; i < n; i++) {
        if (vet[i] == 0) {
            cout << i + 1 << "\n";
        }
    }

    return 0;
}