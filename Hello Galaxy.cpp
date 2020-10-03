#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, smv;
    int a, q, amv, n;

    while (cin >> n && n != 0){

        smv = "";
        amv = 2113;

        for (int i = 0; i < n; i++){
            cin >> s >> a >> q;
            a = a - q;

            if (a < amv ){
                smv = s;
                amv = a;
            }
        }
        cout << smv << endl;
    }


    return 0;
}
