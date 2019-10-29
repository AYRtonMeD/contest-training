#include <iostream>
using namespace std;

int repetidos (int num){
    int lista[10] = {}, val;
    while (num != 0){
        val = num%10;
        if (lista[val] == 0) ++lista[val];
        else return 0;
        num = num/10;
    }
    return 1;
}

int main(){
    int n1, n2, cont;
    while (cin >> n1 >> n2){
        cont = 0;
        for (int i = n1; i <= n2; i++){
            cont += repetidos(i);
        }
        cout << cont << endl;
    }

    return 0;
}
