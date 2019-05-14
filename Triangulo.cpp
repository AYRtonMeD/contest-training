#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    float n1, n2, n3, maior = 0, soma = 0, n;

    cin >> n1;
    if (n1 > maior) maior = n1;
    soma += n1;
    cin >> n2;
    if (n2 > maior) maior = n2;
    soma += n2;
    cin >> n3;
    if (n3 > maior) maior = n3;
    soma += n3;

    if (soma - maior > maior){
        printf("Perimetro = %.1f\n", soma);
    }
    else {
        printf("Area = %.1f\n", n3 * (n1+n2) /2);
    }

    return 0;
}
