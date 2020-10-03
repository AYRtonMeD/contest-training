#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void change (int query[1000][3], int i, int menor){ // faz o swap. ps: swap era palavra reservada
    int val1, val2, val3, val4;
    val1 = query[menor][0];
    val2 = query[menor][1];
    val3 = query[menor][2];

    query[menor][0] = query[i][0];
    query[menor][1] = query[i][1];
    query[menor][2] = query[i][2];

    query[i][0] = val1;
    query[i][1] = val2;
    query[i][2] = val3;
}

void max_heapfy (int query[1000][3], int i, int heap_len){
    int left = i * 2 + 1;
    int right = i * 2 + 2;
    int menor = i;

    if (left < heap_len){
        if (query[left][1] == query[i][1] && query[left][0] < query[i][0]) menor = left; //se o tempo foz igual, o id desempara
        else if (query[left][1] < query[i][1]) menor = left;
    }
    if (right < heap_len){
        if (query[right][1] == query[menor][1] && query[right][0] < query[menor][0]) menor = right; //se o tempo foz igual, o id desempara
        else if(right < heap_len && query[right][1] < query[menor][1]) menor = right;
    }
    if (menor != i){
        change(query, i, menor);
        max_heapfy(query, menor, heap_len);
    }
}

void build_max_heap(int query[1000][3], int heap_len){
    for (int i = heap_len/2 + heap_len%2 - 1; i >= 0; i--){
        max_heapfy(query, i, heap_len);
    }
}

int main(){
    int query[1000][3];
    int heap_len = 0, qnum, period, k;
    char palavra[10];

    while (cin >> palavra && strcmp(palavra, "#")){ //recebe os valores e coloca na matriz query
        cin >> qnum >> period;
        query[heap_len][0] = qnum;
        query[heap_len][1] = period;
        query[heap_len][2] = period;
        heap_len++;
    }
    cin >> k;
    build_max_heap(query, heap_len);

    int tempo = 0;
    for (int i = 0; i < k; i++){
        cout << query[0][0] << endl;
        tempo += query[0][2];
        query[0][1] += query[0][2];
        max_heapfy(query, 0, heap_len);
    }

    return 0;
}
