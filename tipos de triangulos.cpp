#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (c > b){
        b = b+c;
        c = b-c;
        b = b-c;
    }
    if (b > a){
        a = a+b;
        b = a-b;
        a = a-b;
    }
    if (c > b){
        b = b+c;
        c = b-c;
        b = b-c;
    }

    if (a >= b+c){
        cout << "NAO FORMA TRIANGULO\n";
    }
    else {
        if (pow(a,2) == pow(b,2) + pow(c,2)) cout << "TRIANGULO RETANGULO\n";

        else if (pow(a,2) > pow(b,2) + pow(c,2)) cout << "TRIANGULO OBTUSANGULO\n";

        else cout << "TRIANGULO ACUTANGULO\n";

        if (a == b && b == c) cout << "TRIANGULO EQUILATERO\n";

        else if (a == b || a == c || b == c) cout << "TRIANGULO ISOSCELES\n";
    }


    return 0;
}
