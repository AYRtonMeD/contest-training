#include <iostream>
using namespace std;

int main(){
    string palavra;
    char letra;
    double quantPalavras = 0, palavrasCertas = 0;

    cin >> letra;

    while (cin >> palavra){
        quantPalavras++;
        for (int i = 0; palavra[i] != '\0'; i++){
            if (palavra[i] == letra){
                palavrasCertas++;
                break;
            }
        }
    }
    printf("%.1f\n", palavrasCertas/quantPalavras * 100);
    return 0;
}
