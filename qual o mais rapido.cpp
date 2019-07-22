#include <iostream>
using namespace std;

int main(){
    double valor, v = 101;
    int valorI;
    char r = '\0';

    for (int i = 1; i < 4; i++){
        cin >> valor;
        if (valor < v){
            valorI = i;
            v = valor;
            r = '\0';
        }
        else if (valor == v) r = 'E';
    }

    if (r == 'E') cout << "Empate";
    else{
        if (valorI == 1) cout << "Otavio";
        else if (valorI == 2) cout << "Bruno";
        else cout << "Ian";
    }
    cout << endl;
    return 0;
}
