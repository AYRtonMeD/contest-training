#include <iostream>
using namespace std;

int main(){
    int lista[] = {4,8,1,4,0,1,7,4,5};
    int n = 9;
    int menor, pos_j;
    for (int i = 0; i < n-1; i++){
        menor = 1000;
        pos_j = i;
        for (int j = i+1; j < n; j++){
            if (lista[j] < lista[pos_j]){
                pos_j = j;
            }
        }
        if (pos_j != i){
                    lista[pos_j] = lista[pos_j] + lista[i];
        lista[i] = lista[pos_j] - lista[i];
        lista[pos_j] = lista[pos_j] - lista[i];
        }
    }
    for (int i = 0; i < n; i++){
        cout << lista[i] << endl;
    }
    return 0;
}
