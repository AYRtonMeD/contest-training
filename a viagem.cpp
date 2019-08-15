#include <iostream>
using namespace std;

int main(){
    int quant;
    double soma, maiores, menores;

    while (cin >> quant && quant != 0){
        soma = 0.0;
        maiores = 0.0;
        menores = 0.0;
        double lista[quant];

        for (int i = 0; i < quant; i++){
            cin >> lista[i];
            soma += lista[i];
        }
        soma = soma/quant;

        for (int i = 0; i < quant; i++){
            if (lista[i] > soma) maiores += (double) ((int)((lista[i] - soma)*100) )/100;
            else if (lista[i] < soma) menores += (double) ((int)((soma - lista[i])*100) )/100;
        }
        cout << maiores << " " << menores << " " << soma << endl;
        printf("$%.2lf\n", (menores + maiores)/2);
    }
    return 0;
}
