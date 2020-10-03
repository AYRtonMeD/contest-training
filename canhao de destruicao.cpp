#include <bits/stdc++.h>
using namespace std;

int dano_maximo(int mochila, int quant_balas, int tabela[][2]){
	int memo[quant_balas+1][mochila+1];
	for (int i = 0; i <= quant_balas;i++){
		memo[i][0] = 0;
	}
	for (int i = 0; i <= mochila; i++){
		memo[0][i] = 0;
	}

	for (int bala_atual = 1; bala_atual <= quant_balas; bala_atual++){
		for (int peso_atual = 1; peso_atual <= mochila; peso_atual++){
			if (tabela[bala_atual-1][1] <= peso_atual){
				if (tabela[bala_atual-1][0] + memo[bala_atual-1][peso_atual - tabela[bala_atual-1][1]] > memo[bala_atual-1][peso_atual]){
					memo[bala_atual][peso_atual] = tabela[bala_atual-1][0] + memo[bala_atual-1][peso_atual - tabela[bala_atual-1][1]];
				}
				else{
					memo[bala_atual][peso_atual] = memo[bala_atual-1][peso_atual];
				}
			}
			else {
				memo[bala_atual][peso_atual] = memo[bala_atual-1][peso_atual];
			}
		}
	}
	return memo[quant_balas][mochila];

}

int main(){

   int n = -100;
    cout << n%2;

	return 0;
}
