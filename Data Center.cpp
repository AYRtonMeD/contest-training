#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, n, m;
    cin >> n;
    n1 = pow(n, (1/2.0));
    n2 = n1;

    do{
        m = n1*n2;
        if (m < n) {
            n1++;
        }
        else if (m > n){
            n2--;
        }
    } while (m != n);

    cout << n1*2 + n2*2;

    return 0;
}
