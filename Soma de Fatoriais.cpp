#include <iostream>
using namespace std;

long long unsigned int fatorial(int n){
    if (n == 0) return 1;

    return fatorial(n-1) * n;
}

int main(){
    int n1, n2;
    while(cin >> n1 >> n2){
        cout << fatorial(n1) + fatorial (n2) << endl;
    }

    return 0;
}
