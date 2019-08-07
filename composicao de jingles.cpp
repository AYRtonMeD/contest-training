#include <iostream>
#include <map>
using namespace std;

int main(){
    map<char, float> notas;;
    notas.insert(pair<char, float>('W', 1));
    notas.insert(pair<char, float>('H', 0.5));
    notas.insert(pair<char, float>('Q', 0.25));
    notas.insert(pair<char, float>('E', 0.125));
    notas.insert(pair<char, float>('S', 0.0625));
    notas.insert(pair<char, float>('T', 0.03125));
    notas.insert(pair<char, float>('X', 0.015625));

    string palavra;
    int cont;
    double soma;

    while (cin >> palavra && palavra != "*"){
        soma = 0;
        cont = 0;
        for (int i = 0; palavra[i] != '\0'; i++){
            if (palavra[i] == '/'){
                if (soma == 1.0) cont++;
                soma = 0;
            }
            else soma += notas[palavra[i]];
        }
        cout << cont << endl;
    }
    return 0;
}
