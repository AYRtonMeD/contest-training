#include<iostream>
using namespace std;

int funk (int** mat){
    return 0;
}
int main(){
    int n, linha, coluna, valor;

    cin >> n;
    cin >> linha, coluna;
    int tabela[n+2][n+2] = {};

    for (int i = 1; i < n-1; i++){
        for (int j = 1; j < n-1; j++){
            cin >> valor;
            tabela[i][j] = valor;
        }
    }
    funk(tabela);
    return 0;
}
