#include <iostream>
using namespace std;

int main(){
    int n, inicio;

    while (cin >> n && n != 0){
        int lista[n];
        for (int j = 0; j < n; j++){
            cin >> lista[j];
        }
        cin >> inicio;
        while (inicio != lista[inicio-1]){
            inicio = lista[inicio-1];
        }
        cout << inicio << endl;
    }
    return 0;
}
