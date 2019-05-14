#include<iostream>
#include<cmath>

using namespace std;

int main(){
    unsigned long int n1, n2, soma;

    while (cin >> n1 >> n2){
        soma = 0;
        for (int i = 0; n1 != 0 || n2 != 0; i++){

            if ((n1 % 2) != (n2 % 2)){
                soma += pow(2,i);
            }
            n1 /= 2;
            n2 /= 2;
        }
        cout << soma << endl;
    }
    return 0;
}
