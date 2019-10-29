#include <iostream>
using namespace std;

int main(){
    int quant, num;
    cin >> quant;

    for (int i = 0; i < quant; i ++){
        cin >> num;
        cout << num * (num+1) / 2 + 1 << endl;
    }
    return 0;
}
