#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int lista[4], maiorValor = 0, menorValor = 100;
    int menorPosicao, maiorPosicao, soma = 0, subtracao;

    for (int i = 0; i < 4; i++){
        cin >> lista[i];
        if (lista[i] > maiorValor){
            maiorValor = lista[i];
            maiorPosicao = i;
        }
        if (lista[i] < menorValor){
            menorValor = lista[i];
            menorPosicao = i;
        }
    }

    for (int i = 0; i < 4; i++){
        if (i == menorPosicao || i == maiorPosicao){
            continue;
        }
        soma += lista[i];
        subtracao = lista[i];
    }
    subtracao = abs(subtracao - (soma - subtracao));

    if (subtracao < menorValor || soma > maiorValor){
        cout << "S\n";
    }
    else{
        cout << "N\n";
    }

    return 0;
}
