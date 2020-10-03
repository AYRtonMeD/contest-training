#include <bits/stdc++.h>
using namespace std;
int memo[10];

int melhor_corte(int p[], int tma){
    if (tma == 0) return 0;
    if (memo[tma-1] != -1) return memo[tma-1];

    int q = 0;
    for (int i = 1; i <= tma; i++){
        q = max(q, p[i-1] + melhor_corte(p, tma-i));
    }

    memo[tma - 1] = q;
    return q;
}

int melhor_corte_2(int p[], int tma){
    for (int i = 1; i <= tma; i++){
        int q = 0;
        for (int j = 1; j <= i; j++){
            q = max(q, p[j-1] + memo[i - j]);
        }
        memo[i] = q;
    }
    return memo[tma];
}


void imprime_lcs(char cadeia1[], int mat2[][7], int x, int y){
cout<<x << " " << y << " " << mat2[x][y] << endl;
    if (x == 0 || y == 0) return;
    if (mat2[x][y] == 1){
        imprime_lcs(cadeia1, mat2, x-1, y-1);
        cout << cadeia1[y-1];
    }
    else if (mat2[x][y] == 2){
        imprime_lcs(cadeia1, mat2, x-1, y);
    }
    else{
        imprime_lcs(cadeia1, mat2, x, y-1);
    }
}

int lcs (char cadeia1[], char cadeia2[], int c1, int c2){
    int mat[8][7] = {};
    int mat2[8][7] = {};

    for (int i= 1; i < c2; i++){
        cout << cadeia2[i-1] << endl;
        for (int j = 1; j < c1; j++){
            if (cadeia1[j-1] == cadeia2[i-1]){
                mat[i][j] = mat[i-1][j-1] + 1;
                mat2[i][j] = 1;
            }
            else if (mat[i-1][j] >= mat[i][j-1]){
                mat[i][j] = mat[i-1][j];
                mat2[i][j] = 2;
            }
            else{
                mat[i][j] = mat[i][j-1];
                mat2[i][j] = 3;
            }
        }
    }
    imprime_lcs (cadeia1, mat2, c2-1, c1-1);
    for (int i = 0; i < c2; i++){
        for (int j = 0; j < c1; j++){
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int p[10] = {1,5,8,9,10,17,17,20,24,30};
    char p1[6] = {'b', 'd', 'c', 'a', 'b', 'a'};
    char p2[7] = {'a', 'b', 'c', 'b', 'd', 'a', 'b'};
    lcs(p1,p2,7,8);
    for (int i = 0; i < 10; i++){
        memo[i] = 0;
    }
    //cout << melhor_corte_2(p, 5);
    return 0;
}
