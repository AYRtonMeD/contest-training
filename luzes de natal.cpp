#include <bits/stdc++.h>
using namespace std;

int main(){

    int altura, largura, quant, luzes, val;
    while (cin >> altura >> largura >> quant && (altura != 0 || largura != 0 || quant != 0)){
        luzes = 0;
        for (int i = 0; i < quant; i++){
            cin >> val;
            luzes += largura - val + 1;
        }
        cout << "Lights: " << luzes << endl;
    }
    return 0;
}
