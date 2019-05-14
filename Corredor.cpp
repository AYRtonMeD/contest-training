#include <iostream>
using namespace std;

int main(){
    int lenght, maior = 0, somaAtual = 0, num;
    cin >> lenght;

    for (int i = 0;i < lenght; i++){
        cin >> num;
        if (somaAtual + num <= 0){
            somaAtual = 0;
        }
        else if (somaAtual + num > maior){
            maior = somaAtual + num;
            somaAtual = maior;
        }
        else{
            somaAtual += num;
        }
    }
    cout << maior << endl;
    return 0;
}
