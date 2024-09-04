#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
    int vet[n];

    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }

    sort(vet, vet + n);

    int count = 1;
    for (int i = 1; i < n; i++) {
        if (vet[i] != vet[i - 1]) count++;
    }

    cout << count << "\n";

    return 0;
}