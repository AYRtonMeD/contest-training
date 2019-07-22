#include <iostream>
#include <cmath>
using namespace std;

int abs(int n);

int main(){
    int r1, x1, y1, r2, x2, y2, lado, altura;

    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
        lado = abs (x1 - x2);
        altura = abs (y1- y2);

        if (x1 == x2 && y1 == y2){
            if (r1 > r2) cout << "RICO" << endl;
            else cout << "MORTO" << endl;
            continue;
        }

        if (x1 == x2){
            if (r1 >= altura + r2) cout << "RICO" << endl;
            else cout << "MORTO" << endl;
            continue;
        }

        if (y1 == y2){
            if (r1 >= lado + r2) cout << "RICO" << endl;
            else cout << "MORTO" << endl;
            continue;
        }

        if ( sqrt(pow(lado, 2) + pow(altura, 2) ) + r2 <= r1) cout << "RICO" << endl;
        else cout << "MORTO" << endl;
    }
    return 0;
}

int abs(int n){
    if (n < 0) return (-n);
    return n;
}
