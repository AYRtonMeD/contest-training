#include <iostream>
using namespace std;
int main(){
    int c, quant;
    bool eh = false;
    cin >> c >> quant;

    for (int i = 1; i <= quant; i++){
        if (eh) cout << " ";
        cout << i;
        eh = true;
        if (i%c == 0 || i == quant){
             cout << endl;
             eh = false;
        }
    }
    return 0;
}
