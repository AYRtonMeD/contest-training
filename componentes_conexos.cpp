#include <bits/stdc++.h>
using namespace std;
priority_queue <char> pq;
void f2 (int memo[], int mat[26][26], int quant_vert, int i);
void f1 (int memo[], int mat[26][26], int quant_vert);

void f1 (int memo[], int mat[26][26], int quant_vert){
    int cont1 = 0;

    for (int i = 0; i < quant_vert; i++){
        if (memo[i] == 0){
            cont1++;

            f2(memo, mat, quant_vert, i);

            int s = pq.size();
            char l[s];
            int cont2 = 0;

            while (!pq.empty()){
                l[cont2] = pq.top();
                pq.pop();
                cont2++;
            }

            for (int m = s-1; m >= 0; m-- ){
                cout << l[m] << ",";
            }
            cout << endl;
        }
    }
    cout << cont1 << " connected components\n";
}

void f2 (int memo[], int mat[26][26], int quant_vert, int i){
    pq.push(i+97);

    memo[i] = 1;
    for (int k = 0; k < quant_vert; k++){
        if (mat[k][i] == 1 && memo[k] == 0) f2(memo, mat, quant_vert, k);
        if (mat[i][k] == 1 && memo[k] == 0) f2(memo, mat, quant_vert, k);
    }
}

int main(){
    int quantCasoTeste, quant_vert, quant_arest;
    char pos1, pos2;

    cin >> quantCasoTeste;

    for (int i = 0; i < quantCasoTeste; i++){
        if (i > 0) cout << endl;
        cout << "Case #" << i+1 << ":\n";
        int grafo[26][26] = {};
        int memo[26] = {0};

        cin >> quant_vert >> quant_arest;
        for (int j = 0; j < quant_arest; j++){
            cin >> pos1 >> pos2;
            grafo[pos1-97][pos2-97] = 1;
        }
        f1 (memo, grafo, quant_vert);
    }
    cout << endl;
    return 0;
}
