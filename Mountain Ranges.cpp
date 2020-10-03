#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, maximo = 0, atual = 1;
    int lista[1000];

    cin >> n >> x;

    for (int i = 0; i < n; i++){
        cin >> lista[i];
    }

    for (int i = 0; i < n-1; i++){
        if (lista[i] + x >= lista[i+1]) ++atual;
        else atual = 1;
        if (maximo < atual) maximo = atual;
    }
    cout << maximo << endl;

    return 0;
}
