#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    float n1, n2, n3, n4, media, novaMedia;
    cin >> n1 >> n2 >> n3 >> n4;
    media = ( (n1*2) + (n2*3) + (n3*4) + (n4*1) )/10;

    printf("Media: %.1f\n", media);

    if (media >= 7){
        cout << "Aluno aprovado.\n";
        return 0;
    }
    else if (media < 5){
        cout << "Aluno reprovado.\n";
        return 0;
    }
    else {
        cout << "Aluno em exame.\n";
    }

    cin >> novaMedia;
    media = (media+novaMedia)/2;
    printf("Nota do exame: %.1f\n", novaMedia);

    if (media < 5){
        cout << "Aluno reprovado.\n";
    }
    else {
        cout << "Aluno aprovado.\n";
    }
    printf("Media final: %.1f\n", media);
    return 0;
}
