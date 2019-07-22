#include <iostream>
using namespace std;

int main(){
    int p = 0, n = 0, par = 0, impar = 0;
    int val;

    for (int i = 0; i < 5; i++){
        cin >> val;
        if (val > 0) p++;
        else if (val < 0) n++;
        if (val %2 == 0) par++;
        else impar++;
    }

    cout << par << " valor(es) par(es)\n";
    cout << impar << " valor(es) impar(es)\n";
    cout << p << " valor(es) positivo(s)\n";
    cout << n << " valor(es) negativo(s)\n";
    return 0;
}
