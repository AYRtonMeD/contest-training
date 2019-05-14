#include <iostream>
using namespace std;

int main(){
    int n, m, num, maior = 0, atual, anterior = 0;
    cin >> n >> m;
    bool s = true, v;

    for (int i = 0; i < n; i++){
        atual = 0;
        v = true;

        for (int j = 0; j < m; j++){
            cin >> num;
            if (num != 0 && s && v) {
                if (maior < atual) s = false;
                v = false;
            }
            else if (num == 0 && s && v){
                atual++;
                if (atual > maior && s) maior = atual;
            }
        }
        if (atual != 0 && atual < m && atual == anterior) s = false;
        if (i > 0 && maior == 0){
            s = false;
        }
        anterior = maior;
    }
    if (s) cout << "S\n";
    else cout << "N\n";
    return 0;
}
