#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double r, volume, pi = 3.14159;

    cin >> r;

    volume = (4.0/3)*pi*r*r*r;
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}


