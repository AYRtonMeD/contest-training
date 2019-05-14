#include <iostream>
using namespace std;

int main(){
    int d, v1, v2;

    while (cin >> d >> v1 >> v2){
        if ( ((12 - d) / v1) > (12/v2) ) cout << "S\n";
        else cout << "N\n";
    }
    return 0;
}
