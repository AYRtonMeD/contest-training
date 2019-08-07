#include <iostream>
using namespace std;

int main(){
    int a, b, c, soma;

    while (cin >> a >> b >> c){
        soma = a+b+c;
        if (soma == 1){
            if (a==1) cout << "A";
            else if (b==1) cout << "B";
            else if (c==1) cout << "C";
        }
        else if (soma == 2){
            if (a==0) cout << "A";
            else if (b==0) cout << "B";
            else if (c==0) cout << "C";
        }
        else cout << "*";
        cout << endl;
    }
    return 0;
}

