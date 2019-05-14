#include <iostream>
#include <cstdio>

using namespace std;

int main(){

	int quant_grand, quant_competidores, quant_sistemas, quant_valores;
	int posicoes[100][100];
	int maiorValor;

	while (cin >> quant_grand >> quant_competidores && quant_grand != 0 && quant_competidores != 0){
		for (int i = 0; i < quant_grand; i++){
			for (int j = 0; j < quant_competidores; j++){
				cin >> posicoes[i][j];
			}
		}
		cin >> quant_sistemas;

		for (int i = 0; i < quant_sistemas; i++){
			cin >> quant_valores;
			int sistema;
			int resultado[100] = {};
			bool aux = true;
			maiorValor = 0;

			for (int j = 0; j < quant_valores; j++){
				cin >> sistema;
				for (int linha = 0; linha < quant_grand; linha ++){
					for (int coluna = 0; coluna < quant_competidores; coluna++){
						if (posicoes[linha][coluna] == j+1){
							resultado[coluna] += sistema;
							if (resultado[coluna] > maiorValor){
								maiorValor = resultado[coluna];
							}
						}
					}
				}
			}
			for (int j = 0; j < quant_competidores; j++){
				if (resultado[j] == maiorValor){
                    if (!aux){
                        cout << " " << j+1;
                        continue;
                    }
                    cout << j+1;
                    aux = false;
				}
			}
			cout << endl;
		}
	}
	return 0;
}
