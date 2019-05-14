#include <iostream>
using namespace std;

void imprime (int ini, string palavra){
    for (int i = ini; palavra[i] != '\0'; i++){
        cout << palavra[i];
    }
}

int main(){
    int n;
    string s1, s2;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> s1 >> s2;

        for (int j = 0; s1[j] != '\0' && s2[j] != '\0'; j++){
            cout << s1[j] << s2[j];
            if (s1[j+1] == '\0'){imprime(j+1, s2);break;}
            else if (s2[j+1] == '\0'){imprime(j+1, s1);break;}
        }
        cout << endl;
    }
    return 0;
}
