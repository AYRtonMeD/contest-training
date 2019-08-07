#include <iostream>
using namespace std;

int fibonacci(int num, int *calls, int resultado){
    ++*calls;
    if (num == 0) return 0;
    else if (num == 1) return 1;
    else {
        return fibonacci(num-1, calls, resultado) + fibonacci (num-2, calls, resultado);
    }
}
int main(){
    int quant, num, *calls, resultado;
    cin >> quant;

    for (int i = 0; i < quant; i++){
        cin >> num;
        *calls = -1;
        resultado = 0;
        resultado = fibonacci(num, calls, resultado);
        cout << "fib(" << num << ") = " << *calls << " calls = " << resultado << endl;


    }
    return 0;
}
