#include <iostream>
using namespace std;

int len(string palavra, bool first){
    int cont = 0;
    if (first) cont ++;
    for (int i = 0; palavra[i] != '\0'; i++) cont++;
    return cont;
}
int main(){
    int lenght, lp, cl, maximo, cont, atual;
    string palavra;
    bool first;

    while (cin >> lenght >> lp >> cl){
        cont = 1;
        maximo = cl;
        first = false;

        for (int i = 0; i < lenght; i++){
            cin >> palavra;
            atual = len(palavra, first);
            if (maximo - atual <= 0){
                cout << palavra << endl;
                maximo = cl;
                cont++;
                first = false;
            }
            first = true;
            maximo -= atual;
        }
        cout << cont;
        if (cont % lp != 0) cout << cont/lp << endl;
        else cout << cont/lp << endl;
    }

}
