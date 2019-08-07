#include <iostream>
using namespace std;

int main(){
    int l, c, cont = 0;
    char val;
    cin >> l >> c;
    int mat[l+2][c+2] = {};

    for (int i = 1; i < l+1; i++){
        for (int j = 1; j < c+1; j++){
            cin >> val;
            if (val == '#'){
                mat[i][j] -= 4;
                mat[i-1][j]++;
                mat[i+1][j]++;
                mat[i][j-1]++;
                mat[i][j+1]++;
            }
        }
    }

    for (int i = 1; i < l+1; i++){
        for (int j = 1; j < c+1; j++){
            if (mat[i][j] < 0) cont++;
        }
    }
    cout << cont << endl;
    return 0;
}
