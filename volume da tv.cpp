#include <iostream>
using namespace std;

int main(){
    int volInicial , n, valores;
    cin >> volInicial >> n;

    for (int i = 0; i < n; i++){
        cin >> valores;
        volInicial += valores;
        if (volInicial < 0) volInicial = 0;
        else if (volInicial > 100) volInicial = 100;
    }
    cout << volInicial << endl;
    return 0;
}
