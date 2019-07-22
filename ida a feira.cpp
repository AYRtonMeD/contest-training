#include <iostream>
#include <cstdio>
using namespace std;

struct produto{
    string nome;
    double preco;
};
int main(){
    int x, quantP, quantProdutos, quant;
    double total;
    string nome;

    cin >> x;
    for (int i = 0; i < x; i++){
        total = 0;
        cin >> quantP;
        struct produto p[quantP];

        for (int j = 0; j < quantP; j++){
            cin >> p[j].nome;
            cin >> p[j].preco;
        }
        cin >> quantProdutos;

        for (int j = 0; j < quantProdutos; j++){
            cin >> nome >> quant;
            for (int k = 0; k < quantP; k++){
                if (nome == p[k].nome){
                    total += p[k].preco * quant;
                }
            }
        }
        printf("R$ %.2lf\n", total);
    }
    return 0;
}
