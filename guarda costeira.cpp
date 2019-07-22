#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int d, vg;
	double distancia, vf;

	while (cin >> d >> vf >> vg){
		distancia = sqrt(pow(d,2) + 144);
		if (12/vf >= distancia/vg) cout << "S\n";
		else cout << "N\n";
	}
	return 0;
}
