#include <bits/stdc++.h>
using namespace std;

char mochila(int valorMoedas[], int quant_moedas, int valor_final){
    int memo[quant_moedas+1][quant_moedas+1] = {};

    for (int moeda_atual = 1; moeda_atual <= quant_moedas; moeda_atual++){
        for (int peso_atual = 1; peso_atual <= quant_moedas; peso_atual++){
            int v1 = valorMoedas[moeda_atual-1] + memo[moeda_atual-1][peso_atual];
            int v2 = memo[moeda_atual - 1][peso_atual];

            if (v1 > v2 && v1 <= valor_final){
                memo[moeda_atual][peso_atual] = v1;
            }
            else memo[moeda_atual][peso_atual] = v2;
        }
    }

    if (memo[quant_moedas][quant_moedas] == valor_final) return 'S';
    else return 'N';
}

int main(){
    int valor_final, quant_moedas;
    cin >> valor_final >> quant_moedas;
    int valorMoedas[quant_moedas];
    for (int i = 0; i < quant_moedas; i++){
        cin >> valorMoedas[i];
    }
    cout << mochila(valorMoedas, quant_moedas, valor_final) << endl;

    return 0;
}
