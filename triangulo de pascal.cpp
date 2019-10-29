#include <iostream>
using namespace std;

int potencia (int num, int potencia){
    int resultado = num;
    for (int i = 1; i < potencia; i++){
        resultado *= num;
    }
    return resultado;
}
int main(){
    int quant, num;
    cin >> quant;

    for (int i = 0; i < quant; i++){
        cin >> num;
        cout << potencia(2, num) - 1 << endl;
    }
    return 0;
}
