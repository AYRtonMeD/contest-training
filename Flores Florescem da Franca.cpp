#include <iostream>
using namespace std;

int main(){
    string palavra;
    char letra;
    bool eh, foi;

    while (getline(cin, palavra) && palavra != "*"){
        eh = true;
        foi = true;
        letra = palavra[0];
        for (int i = 0; palavra[i] != '\0'; i++){
            if (eh && palavra[i] != letra && (palavra[i] != (char)((int)letra + 32) && palavra[i] != (char)((int)letra - 32) )){
                cout << "N\n";
                foi = false;
                break;
            }
            eh = false;
            if (palavra[i] == ' ') eh = true;
        }
        if (foi) cout << "Y\n";
    }
    cout << endl;
    return 0;
}
