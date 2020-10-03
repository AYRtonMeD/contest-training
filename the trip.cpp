#include <bits/stdc++.h>
using namespace std;

int main(){
    double values[1000];
    double media, exchangeNegativo, exchangePositivo, total, diff, resposta;
    int quantEstudantes;

    while (cin >> quantEstudantes && quantEstudantes != 0){
        total = 0;
        exchangeNegativo = 0;
        exchangePositivo = 0;

        for (int i = 0; i < quantEstudantes; i++){
            cin >> values[i];
            total += values[i];
        }

        media = total / quantEstudantes;

        for (int i = 0; i < quantEstudantes; i++){
            diff = (double) (long) ( (values[i] - media) * 100.0) / 100.0;

            if (diff > 0) exchangePositivo += diff;
            else exchangeNegativo += diff;
        }
        resposta = (-exchangeNegativo > exchangePositivo) ? -exchangeNegativo : exchangePositivo;
        printf ("$%.2lf\n", resposta);
    }
    return 0;
}
