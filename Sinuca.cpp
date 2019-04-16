#include <iostream>
using namespace std;

int main(){
	int quant;
	cin >> quant;
	int lista[quant] = {};
	
	for (int i = 0; i < quant; i++){
		cin >> lista[i];
	}
	
	for (int i = 0; i < quant - 1; i++){
		for (int j = 0; j < quant - i - 1; j++){
			if (lista[j] == lista[j+1]){
				lista[j] = 1;
			}
			else{
				lista[j] = -1;
			}
		}
	}
	if (lista[0] == 1){
		cout << "preta\n";
	}
	else{
		cout << "branca\n";
	}
	return 0;
}
