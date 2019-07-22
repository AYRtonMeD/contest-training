#include <iostream>
using namespace std;

int main(){
	int n1, n2, resto, n;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> n1 >> n2;
		resto = 0;
		if (n2 > n1){
			n1 = n1 + n2;
			n2 = n1 - n2;
			n1 = n1 - n2;
		}
		if (n1 == n2){
			cout << n1 << endl;
			continue;
		}
		while (n1%n2 != 0){
			resto = n1%n2;
			n1 = n2;
			n2 = resto;
		}
		cout << n2 << endl;
		}
	return 0;
}
