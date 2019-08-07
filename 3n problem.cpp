#include <iostream>
using namespace std;

int funk (int n1, int n2, int respostaf){
    int resposta, soma;
    for (int i = n1; i <= n2; i++){
        soma = i;
        resposta = 1;
        while (soma > 1){
            if (soma % 2 == 0) soma = soma / 2;
            else soma = 3*soma + 1;
            resposta ++;
        }
        if (resposta > respostaf){
             respostaf = resposta;

        }
    }
    return respostaf;
}
int main(){
    int n1, n2, respostaf;

    while (cin >> n1 >> n2){
        respostaf = 0;
        if (n1 > n2) respostaf = funk (n2, n1, respostaf);
        else respostaf = funk (n1, n2, respostaf);
        cout << n1 << " " << n2 << " " << respostaf << endl;
    }

    return 0;
}
