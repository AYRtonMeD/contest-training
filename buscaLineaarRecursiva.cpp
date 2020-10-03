#include <bits/stdc++.h>
using namespace std;

int buscaLinear(int vetor[], int i, int lenght, int val){
    if (i == lenght) return -1;
    if (vetor[i] == val) return i;
    return buscaLinear(vetor, i+1, lenght, val);
}

int main(){
    int vetor[] = {4,1,7,3,9,2,10,5,1,9,1,8,5,9,3,12};
    cout << buscaLinear(vetor, 0, 16, 12);

    return 0;
}
