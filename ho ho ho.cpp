#include <iostream>
using namespace std;

int main (){
    int quant;
    cin >> quant;

    for (int i = 1; i <= quant; i++){
        cout << "Ho";
        if (quant == i) cout << "!";
        else cout << " ";
    }
    cout << "\n";
    return 0;
}
