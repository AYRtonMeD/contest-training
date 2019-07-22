#include <iostream>
using namespace std;

int main(){
    double l;
    int total = 1;
    cin >> l;
    while (l >= 2){
        l /= 2;
        total *= 4;
    }
    cout << total << endl;
    return 0;
}
