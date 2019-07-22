#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
    long double lado;
    cout << sin(1.25664)*0.0000001/0.0000001067;
    while (cin >> lado){
        printf("%.10llf\n", lado * (sin(1.25664)/ sin(1.10029)));
    }

    return 0;
}
