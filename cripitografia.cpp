#include <iostream>
using namespace std;

int len (string palavra, bool ver);
void func1 (string palavra);
void func2(string palavra);

int len (string palavra, bool ver){
    int total = 0;
    for (int i = 0; palavra[i] != '\0'; i++){
        if (ver && palavra[i] == ' ') continue;
        total++;
    }
    return total;
}
void func1 (string palavra){
    int letra;
    for (int i = 0; palavra[i] != '\0'; i++){
        letra = (int)palavra[i];
        if ( (letra > 64 && letra < 91) || (letra > 96 && letra < 123) ){
            palavra[i] = (char)letra+3;
        }
    }
    func2(palavra);
}

void func2 (string palavra){
    int maximo = len(palavra, false);
    int maxSemEspaco = len(palavra, false);

    if (maxSemEspaco %2 == 0) maxSemEspaco /= 2;
    else maxSemEspaco = (maxSemEspaco + 1) / 2;

    for (int i = 0; maxSemEspaco > 0; i++){
        if (palavra[i] == ' '){
            maxSemEspaco --;
            continue;
        }

        palavra[i] = (char)((int)palavra[i] - 1);
        maxSemEspaco --;
    }

    for (int i = maximo-1; i>=0; i--) cout << palavra[i];
    cout << endl;

}
int main(){
    int n;
    string palavra;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++){

        getline(cin, palavra);
        func1(palavra);

    }
    return 0;
}
