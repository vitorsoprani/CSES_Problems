#include <bits/stdc++.h>

using namespace std;

int sum = 1, best = 1;
char cAnterior, cAtual;

int main() {
    cin >> cAnterior;
    while (cin >> cAtual) {
        if (cAnterior == cAtual) {
            // cout << cAnterior << "=" << cAtual << " ";
            sum++;
            // cout << sum << "\n";
        } else {
            best = max(sum, best);
            // cout << cAnterior << "!=" << cAtual << "\n";
            sum = 1;
        }
        cAnterior = cAtual;
    }
    cout << max(best, sum) << "\n";
    return 0;
}