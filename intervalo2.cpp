#include <iostream>
using namespace std;

int main(){
    int quant, in = 0, out = 0;
    int val;
    cin >> quant;
    for (int i = 0; i < quant; i++){
        cin >> val;
        if (val >= 10 && val <= 20) in ++;
        else out++;
    }
    cout << in << " in\n";
    cout << out << " out\n";
    return 0;
}
