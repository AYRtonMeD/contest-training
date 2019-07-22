#include <iostream>
using namespace std;

int main(){
    int players, games, pontos, quant = 0;
    bool eh;

    cin >> players >> games;
    for (int i = 0; i < players; i++){
        eh = true;
        for (int j = 0; j < games; j++){
            cin >> pontos;
            if (pontos == 0) eh = false;
        }
        if (eh) quant++;
    }
    cout << quant << endl;
    return 0;
}
