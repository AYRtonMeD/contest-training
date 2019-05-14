#include <iostream>
using namespace std;

void menssagem (float media){
    if (media > 7){
        cout << "Aprovado\n";
        return 0;
    }
    else if (media < 5){
        cout << "reprovado\n";
        return 0;
    }
    else {
        cout << "Aluno em exame\n";
    }
}
int main(){
    float n1, n2, n3, n4, media, novaMedia;
    cin >> n1 >> n2 >> n3 >> n4;
    media = ( (n1*2) + (n2*3) + (n3*4) + (n4*1) )/10;
    menssagem (media);

    cin >> novaMedia;
    media = (media+novaMedia)/2;
    menssagem (media);
    return 0;
}
