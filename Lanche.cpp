#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int codigo, quantidade;
    cin >> codigo >> quantidade;
    cout << "Total: R$ ";

    switch (codigo){
        case 1:
            printf("%.2lf\n", quantidade*4.00);
            break;
        case 2:
            printf("%.2lf\n", quantidade*4.50);
            break;
        case 3:
            printf("%.2lf\n", quantidade*5.00);
            break;
        case 4:
            printf("%.2lf\n", quantidade*2.00);
            break;
        case 5:
            printf("%.2lf\n", quantidade*1.50);
            break;
    }
    return 0;
}
