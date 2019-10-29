#include <iostream>
using namespace std;

int fib (long long int num, int b){

    if (num == 1 || num == 0) return 1;

    int retorno = ( ( fib(num-1, b) + fib(num-2, b) + 1 ) );
    if (retorno >= b) return retorno % b;
    else return retorno;
}

int main(){
    long long int n;
    int b;
    int cont = 0;

    while (cin >> n >> b && (n != 0 || b != 0)){
        cout << "Case " << cont << ":";
        cont ++;

        cout << " " << n << " " << b << " " << fib(n,b) << endl;

    }
    return 0;
}

