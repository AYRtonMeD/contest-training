#include <iostream>
using namespace std;

int catchn(int posicoes [][2]){
    int n, total = 0;

    for (int i = 0; i < 5; i++){
        cin >> n;
        total += n;
        posicoes[i][0] = n;
        cin >> n;
        total += n;
        posicoes[i][1] = n;
    }
    return total;
}
int main(){
    int posicoes [5][2];

    while (catchn){

    }

    return 0;
}
