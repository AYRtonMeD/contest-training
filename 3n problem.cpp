#include <bits/stdc++.h>
using namespace std;

int funk (int n){
    if (n == 1) return 1;
    else if (n%2 == 0) return funk (n/2) + 1;
    else return funk (3*n + 1) + 1;
}


int main (){
    int n1, n2, r;
    int m;
    bool y;

    while (cin >> n1 >> n2){
        m = 0;
        y = false;

        if (n2 < n1){
            swap (n1, n2);
            y = true;
        }

        for (int i = n1; i <= n2; i++){
            r = funk (i);
            if (r > m) m = r;
        }

        if (y) swap (n1, n2);

        printf("%d %d %d\n", n1, n2, m);
    }
    return 0;
}
