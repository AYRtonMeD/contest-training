#include <iostream>
using namespace std;

int main(){
    int r, n, cont = 1;

    while (cin >> r >> n && (r != 0 || n != 0)){
        cout << "Case " << cont << ": ";
        r -= n;
        if (r <= 0) cout << 0;
        else if (r > n * 26) cout << "impossible";
        else if (r % n == 0) cout << r/n;
        else cout << r/n + 1;

        cont ++;
        cout << endl;
    }
    return 0;
}
