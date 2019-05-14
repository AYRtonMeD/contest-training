#include<iostream>
using namespace std;

int main(){
    string nome;
    int x = 0, modulo = 0;
    getline(cin, nome);

    while (nome[x] != '\0'){

        if(nome[x] == ' '){
            cout << ' ';
            modulo = (modulo + 1) % 2;
        }
        else if(x % 2 == modulo){

        }
        else{
            cout << nome[x];
        }
        x++;
    }
    return 0;
}
