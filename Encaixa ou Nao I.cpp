#include <iostream>
using namespace std;

int len(string palavra){
    int l = 0;
    for (int i = 0; palavra[i] != '\0'; i++) l++;
    return l-1;
}

int main(){
    int n, l1, l2;
    string n1, n2;
    bool l;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> n1 >> n2;
        l1 = len(n1);
        l2 = len(n2);
        l = true;

        if (l2 > l1){
             cout << "nao encaixa\n";
             continue;
        }

        for (int i = 0;n1[i] != '\0' && n2[i] != '\0'; i++){
            if (n1[l1-i] != n2[l2-i]) l = false;
        }
        if (l) cout << "encaixa\n";
        else cout << "nao encaixa\n";
    }
    return 0;
}
