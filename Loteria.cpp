#include <iostream>
using namespace std;

int main(){
    int numSorteados[6], numEscolhidos[6], cont = 0;

    for (int i = 0; i < 6; i++){
        cin >> numSorteados[i];
    }
    for (int i = 0; i < 6; i++){
        cin >> numEscolhidos[i];
    }

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            if (numEscolhidos[i] == numSorteados[j]){
                cont++;
                break;
            }
        }
    }
    switch (cont){
        case 3:
            cout << "terno\n";
            break;
        case 4:
            cout << "quadra\n";
            break;
        case 5:
            cout << "quina\n";
            break;
        case 6:
            cout << "sena\n";
            break;
        default:
            cout << "azar\n";
            break;
    }
    return 0;
}
