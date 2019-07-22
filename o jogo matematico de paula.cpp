#include <iostream>
using namespace std;

int main(){
    int n, n1, n2;
    string palavra;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> palavra;
        n1 = (int)palavra[0] - 48;
        n2 = (int)palavra[2] - 48;

        if (n1 == n2) cout << n1*n2 << endl;
        else if ((int)palavra[1] >= 97) cout << n1+n2 << endl;
        else cout << n2 - n1 << endl;
    }
    return 0;
}
