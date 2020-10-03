#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int vetor[], int lenght){
    int key, j;

    for (int i = 1; i < lenght; i++){
        key = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > key){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = key;
    }
}
int main(){
    //16
    int vetor[] = {4,1,7,3,9,2,10,5,1,9,1,8,5,9,3,12};
    insertion_sort(vetor, 16);
    for (int i = 0; i < 16; i++){
        cout << vetor[i] << " ";
    }
    return 0;
}
