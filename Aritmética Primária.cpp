#include <iostream>
using namespace std;

int main(){
    string n1, n2;
    int carry = 0, total, resultado = 0;

    for (int i = 0; i < 9 && n1[i] != '\0' && n2[i] != '\0';i++){
        total = (int) n1[i] + (int) n2[i] + carry;
        if (total > 9){
            carry = 1;
            resultado ++;
        }
        else{
            carry = 0;
        }
    }
    cout << resultado << endl;
}
