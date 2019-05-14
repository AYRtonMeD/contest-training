#include <iostream>
using namespace std;

int len(string palavra){
    int l = 0;
    for (int i = 0; palavra[i] != '\0'; i++) l++;
    return l-1;
}

int carryf (char n1, char n2, int carry){
    int total = (int) n1 + (int) n2 + carry - 96;
    if (total > 9) return 1;
    else return 0;
}

int main(){
    string n1, n2;

    while (cin >>n1>>n2 && (n1 != "0" || n2 != "0")){
        int carry = 0, resposta = 0, len1, len2, i;
        len1 = len(n1);
        len2 = len(n2);
        for (i = 0;i < 9 && n1[i] != '\0' && n2[i] != '\0'; i++){
            carry = carryf(n1[len1 - i], n2[len2 - i], carry);
            if (carry) resposta++;
        }
        if ((n1[len1-i] == '9' || n2[len2-i] == '9') && carry == 1) resposta ++;

        if (resposta == 0) cout << "No carry operation.\n";
        else if (resposta == 1) cout << resposta << " carry operation.\n";
        else cout << resposta << " carry operations.\n";
    }

    return 0;
}
