#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c, p1, p2;
    bool lado, eh;
    cin >> n;
    for (int k = 0; k < n; k++){
        cin >> c;
        int lista[c];
        for (int j = 0; j < c; j++){
            cin >> lista[j];
        }
        sort(lista, lista+c);
        lado = true;
        eh = false;
        p1 = 0;
        p2 = c-1;

        while (p1 <= p2){

            if (lado && lista[p2] % 2 == 1){
                if (eh) cout << " ";
                cout << lista[p2];
                lado = !lado;
                eh = true;
                --p2;
                continue;
            }
            else if (!lado && lista[p1] % 2 == 1){
                if (eh) cout << " ";
                cout << lista[p1];
                lado = !lado;
                eh = true;
                ++p1;
                continue;
            }

            if (lado) --p2;
            else ++p1;
        }
        cout << endl;
    }
    return 0;
}
