#include <bits/stdc++.h>
using namespace std;

void merge_s(int vetor[], int inicio, int meio, int fim){
    int lenght1 = meio - inicio + 1;
    int lenght2 = fim - meio;
    int L[lenght1];
    int R[lenght2];

    for (int i = 0; i < lenght1; i++){
        L[i] = vetor[inicio+i];
    }
    for (int i = 0; i < lenght2; i++){
        R[i] = vetor[meio + i + 1];
    }

    int i = 0, j = 0;
    while (i < lenght1 && j < lenght2){
        if (L[i] < R[j]){
            vetor[i+j+inicio] = L[i];
            i++;
        }
        else {
            vetor[i+j+inicio] = R[j];
            j++;
        }
    }
    if (i == lenght1){
        for (int k = j; k < lenght2; k++){
            vetor[i+k+inicio] = R[k];
        }
    }
    else {
        for (int k = i; k < lenght1; k++){
            vetor[j+k+inicio] = L[k];
        }
    }
}

void merge_sort (int vetor[], int inicio, int fim){
    if (inicio < fim){
        int meio = inicio + (fim - inicio)/2;

        merge_sort (vetor, inicio, meio);
        merge_sort (vetor, meio + 1, fim);

        merge_s (vetor, inicio, meio, fim);
    }
}

int main(){
    //16
    int vetor[] = {4,1,7,3,9,2,10,5,1,9,1,8,5,9,3,12};

    merge_sort (vetor, 0, 15);
    for (int i = 0; i < 16; i++){
        cout << vetor[i] << " ";
    }
    return 0;
}
