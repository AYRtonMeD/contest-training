#include <iostream>
using namespace std;

int len (string s){
    int i;
    for (i = 0; s[i] != '\0'; i++);
    return i-1;
}

int main(){
    int n, l1, l2;
    string s1, s2;
    bool eh;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> s1 >> s2;
        eh = true;
        l1 = len(s1);
        l2 = len(s2);
        for (int j = 0; j < l2+1; j++){
            if (s1[l1-j] != s2[l2-j]) eh = false;
        }
        if (eh) cout << "encaixa";
        else cout << "nao encaixa";
        cout << endl;
    }
    return 0;
}
