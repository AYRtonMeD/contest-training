#include <bits/stdc++.h>
using namespace std;

int main (){
    int nc, n, k;

    cin >> nc;

    for (int iteracoe = 0; iteracoe < nc; iteracoe++){
        cin >> n >> k;
        k--;
        int pos_atual = 0;

        list <int> pessoas;

        for (int pessoa = 1; pessoa <= n; pessoa++) pessoas.push_back(pessoa);
        list <int> :: iterator pos_erase;

        while(n > 1){
            pos_atual += k;
            pos_atual %= n;

            pos_erase = pessoas.begin();
            advance(pos_erase, pos_atual);

            pessoas.erase(pos_erase);

            --n;
        }

        cout << "Case " << iteracoe+1 << ": " << pessoas.front() << endl;
    }
}
