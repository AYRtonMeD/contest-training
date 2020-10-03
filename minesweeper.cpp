#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, a, n = 1;
    char c;
    bool np = false;

    while (cin >> a >> l && (a || l)){
        int mat[a+2][l+2] = {0};

        for (int i = 1; i < a+1; i++){
            for (int j = 1; j < l+1; j++){
                cin >> c;
                if (c == '*'){
                    mat[i][j] = -10;

                    ++mat[i+1][j];
                    ++mat[i-1][j];

                    ++mat[i][j+1];
                    ++mat[i][j-1];

                    ++mat[i+1][j+1];
                    ++mat[i+1][j-1];

                    ++mat[i-1][j+1];
                    ++mat[i-1][j-1];
                }
            }
        }

        if (np) cout << endl;
        np = true;
        cout << "Field #" << n << ":\n";
        n++;

        for (int i = 1; i < a+1; i++){
            for (int j = 1; j < l+1; j++){
                int val = mat[i][j];

                if (val < 0) cout << '*';
                else cout << val;
            }
            cout << endl;
        }
    }
    return 0;
}
