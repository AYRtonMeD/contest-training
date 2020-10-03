#include <bits/stdc++.h>
using namespace std;

void change (int vetor[], int i, int j){
    int val1 = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = val1;
}

int part (int vetor[], int inicio, int fim){
    int pivo = vetor[fim];
    int i = inicio;

    for (int j = inicio; j < fim; j++){
        if (vetor[j] <= pivo){
            change(vetor, i, j);
            i++;
        }
    }
    change (vetor, i , fim);
    return i;
}

int quickSelect (int vetor[], int inicio, int fim, int k){
    if (k > 0 && k <= fim - inicio + 1){
        int index = part(vetor, inicio, fim);

        if (index - inicio == k - 1) return vetor[index];
        if (index - inicio > k - 1) return quickSelect (vetor, inicio, index - 1, k);
        else return quickSelect(vetor, index + 1, fim, inicio + (k -1) - index);

    }
}

int main(){
    int vetor[] = {4,1,7,3,9,2,10,5,1,9,1,8,5,9,3,12};
    cout << quickSelect(vetor, 0, 15, 15);
    return 0;
}
