#include <bits/stdc++.h>
#include <string.h>
#include <cstdlib>

#define TAM 1000000

using namespace std;

//VETORES USADOS NO COUNTING ALOCADOS GLOBALMENTE
char b[TAM][4];

//função de comparação usada no qsort
int compare(const void*a, const void*b) {
    char *va = (char *)a;
    char *vb = (char *)b;
    return strcmp(va,vb);
}

void countingsort(char A[TAM][4], int n, int k, int d) {

    int c[27] = {}; //zera o vetor c
    //Aumenta em 1 a posição do vetor C equivalente ao valor do vetor A
    for (int i = 0; i < TAM; i++){
        c[A[i][d] - 'a']++;
    }

    for (int i = 1; i < k; i++){
        c[i] += c[i-1];
    }

    for (int i = TAM-1; i >= 0; i--){
        strcpy(b[c[A[i][d] - 'a']-1], A[i]);
        c[A[i][d] - 'a']--;
    }

    for (int i = 0; i < TAM; i++){
        strcpy(A[i], b[i]);
    }

    //IMPLEMENTE O RESTO DO COUNTING SORT
    //OBS: pode supor que a entrada só contém letras minúsculas e as strings tem tamanho 4 (três caracteres e o \0 do final)
    //OBS2: O vetor C tem tamanho 27 para esse cenário, uma para cada letra. Para obter o índice do vetor C use a expressão A[i][j] - 'a'

}

int main() {
    char nomes[TAM][4];
    char nomescopy[TAM][4];
    srand(time(NULL));
    clock_t ticks[2];

    //gera strings de 3 digitos aleatórias
    for (int i = 0; i < TAM; i++) {
        char stral[4];
        for(int k = 0; k < 3; k++) stral[k] = (rand()%26) + 'a'; //gera numero aleatorio
        stral[3] = '\0';
        cout << stral << endl;
        strcpy(nomes[i], stral); //copia o numero aletorio gerado para o vetor stral
    }

    //faz uma cópia do array de string para usar no qsort
    for(int i = 0; i < TAM; i++) strcpy(nomescopy[i], nomes[i]);
    ticks[0] = clock();
    //executa o radix sort
    for(int d = 2; d >= 0; d--) {
        countingsort(nomes,TAM,27,d);
    }
    ticks[1] = clock();
    double tempo1 = (double)(ticks[1] - ticks[0])/ CLOCKS_PER_SEC;

    ticks[0] = clock();
    //executa o quicksort
    qsort(nomescopy, TAM, 4*sizeof(char), compare);
    ticks[1] = clock();
    double tempo2 = (double)(ticks[1] - ticks[0])/ CLOCKS_PER_SEC;
    //verifica se os resultados das ordenações foram iguais
    for(int i = 0; i < TAM; i++) {
        cout << nomes[i] << "  " << nomescopy[i] << " - " << strcmp(nomes[i], nomescopy[i]) << endl;
    }


    //mostra o tempo de execução dos algoritmos
    printf("%lf %lf\n",tempo1, tempo2);

    return 0;
}

