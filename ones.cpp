#include <iostream>
#include <cmath>
using namespace std;

int len(string palavra){
    int l = 0;
    for (int i = 0; palavra[i] != '\0'; i++) l++;
    return l-1;
}

int main(){
    int n, fim;
    string numero;
    cin >> n;
    numero = to_string(n);
    fim = len(numero);
    return 0;
}
