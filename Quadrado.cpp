#include <iostream>
using namespace std;

int main(){
    int n, num, soma, l = -1, c = -1;
    cin >> n;
    int linha[n] = {}, coluna[n] = {};
    int mat[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> num;
            mat[i][j] = num;
            linha[i] += num;
            coluna[j] += num;
        }
    }
    if (linha[0] == linha[1]){
        soma = linha[0];
    }
    else if (linha[0] == linha[2]){
        soma = linha[0];
    }
    else{
        soma = linha[1];
    }

    for (int i = 0; i < n; i++){
        if (linha[i] != soma){
            l = i;
        }
        if (coluna[i] != soma){
            c = i;
        }
        if (l != -1 && c != -1){
            break;
        }
    }
    n = linha[l] - mat[l][c];
    cout << abs(n - soma) << " " << mat[l][c] << endl;
    return 0;
}
