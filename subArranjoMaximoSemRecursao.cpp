#include <bits/stdc++.h>
using namespace std;

int main(){
    int precos[] = {10, 113, 1100, 85, 105, 102,86, 63, 81, 101, 94, 106, 101, 74, 94, 90, 97};
    int mudanca[16];
    int maior = 0, menor = 0, soma = 0, maiorSoma = 0, menorAtual = -1;

    for (int i = 0; i < 16; i++){
        mudanca[i] = precos[i+1] - precos[i];
    }
    for (int i = 0; i < 16; i++){
        soma += mudanca[i];
        if (soma <= 0){
            soma = 0;
            menorAtual = i;
        } else if (soma > maiorSoma){
            maior = i;
            menor = menorAtual;
            maiorSoma = soma;
        }
    }
    cout << maior+1 << " " << menor+1;
    return 0;
}
