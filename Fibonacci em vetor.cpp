#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int resposta[61] = {-1}, input, n;
    resposta[0] = 0;
    resposta[1] = 1;

    for (int i = 2; i < 61; i++){
        resposta[i] = resposta[i-1] + resposta[i-2];
    }

    cin >> n;

    for (int k = 0; k < n; k++){
        cin >> input;
        cout << "Fib(" << input << ") = " << resposta[input] << endl;
    }


    return 0;
}
