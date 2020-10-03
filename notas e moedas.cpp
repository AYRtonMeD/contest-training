#include <bits/stdc++.h>
using namespace std;

int main(){
    float v;
    int valor;
    int notas[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};

    cin >> v;
    valor = v * 100;

    cout << "NOTAS:\n";
    for (int i = 0; i < 6; i++) {

        printf("%d", valor / notas[i]);
        printf(" nota(s) de R$ ");
        printf ("%.2f\n", notas[i] / 100.00 );
        valor = valor % notas[i];
    }
    cout << "MOEDAS:\n";
    for (int i = 6; i < 12; i++) {

        printf("%d", valor / notas[i]);
        printf(" moeda(s) de R$ ");
        printf ("%.2f\n", notas[i] / 100.00 );
        valor = valor % notas[i];
    }
    return 0;
}
