#include <iostream>
using namespace std;

int main(){
    long long int len, quant;
    long long int soma = 0;
    cin >> len >> quant;

    soma += quant - 1;
    len -= soma;
    soma += len * len;

    cout << soma << endl;
    return 0;
}
