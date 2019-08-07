#include <iostream>

using namespace std;

int soma (string valor){
    int val = (int)valor[2] - 48;

    for (int i = 3; valor[i] != '\0'; i++){
        val *= 10;
        val += (int)valor[i] - 48;
    }
    return val;
}

int main(){
    string posicao;
    int inicio, fim, q, maior;
    int n, quant, finall, p;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> quant >> finall;
        inicio = 0; fim = 0; maior = 0; q = 0;
        for (int i = 0; i < quant; i++){

            cin >> posicao;
            p = soma(posicao);

            if (posicao[0] == 'B'){
                if (  p - fim > maior) maior = p - fim;
                if (p - inicio > maior) maior = p - inicio;
                fim = p;
                inicio = p;
            }
            else{
                if (q == 0){
                    if (  p - fim > maior) maior = p - fim;
                    fim = p;
                    q++;
                }
                else{
                    if (p - inicio > maior) maior = p - inicio;
                    inicio = p;
                    q--;
                }
            }
        }
        if (  finall - fim > maior) maior = finall - fim;
        if (  finall - inicio > maior) maior = finall - inicio;
        cout << "Case " << i+1<< ": " << maior << endl;
    }
    return 0;
}
