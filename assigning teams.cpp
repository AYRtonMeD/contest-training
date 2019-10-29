#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0, val;
    for (int i = 0; i < 4; i++){
        cin >> val;
        if (i == 1 || i == 2) n+= val;
        else n -= val;
    }
    cout << abs(n) << endl;
}
