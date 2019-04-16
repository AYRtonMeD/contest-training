#include <iostream>
using namespace std;

int main(){
	int quantNotas[101] = {};
	int quant;
	cin >> quant;
	int nota, maior = 0;
	
	for (int i =0; i < quant; i++){
		cin >> nota;
		quantNotas[nota] ++;
	}
	
	for (int i = 0; i < 101; i++){
		if (quantNotas[i] >= maior){
			maior = quantNotas[i];
			nota = i;
		}
	}
	cout << nota << endl;
	
	return 0;
}
