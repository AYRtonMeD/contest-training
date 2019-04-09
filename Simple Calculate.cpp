#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int id, quant;
    float price, total = 0;

    cin >> id >> quant >> price;
    total += quant * price;

    cin >> id >> quant >> price;
    total += quant * price;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}


