#include <iostream>
using namespace std;

struct maiorLetra{
    int maior = 0;
    int quant[26] = {};
};

int main(){
    int quant, letra;
    cin >> quant;
    string texto;
    cin.ignore();

    for (int i = 0; i < quant; i++){
        getline(cin, texto);
        struct maiorLetra l;

        for (int x = 0; texto[x] != '\0'; x++){
            letra = texto[x];
            if (letra > 96 && letra < 123) letra -= 32;
            if (letra > 64 && letra < 91){
                l.quant[letra-65]++;
                if (l.quant[letra-65] > l.maior) l.maior = l.quant[letra-65];
            }
        }
        for (int x = 0; x < 26; x++){
            if (l.quant[x] == l.maior) cout << ((char)(x+97));
        }
        cout << endl;
    }
    return 0;
}
