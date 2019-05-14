#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1, n2;

    if ( ( n2 != 0 && n1 > n2 && n1 % n2 == 0) || (n1 != 0 && n2 > n1 && n2 % n1 == 0)){
        cout << "Sao Multiplos\n";
    }
    else cout << "Nao sao Multiplos\n";
    return 0;
}
