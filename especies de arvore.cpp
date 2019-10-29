#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main(){

	int n, cont;
	bool eh = false;;
	string palavra;
	cin >> n;
	getchar();
    cin.ignore();

	for (int i = 0; i < n; i++){
        if (eh) cout << endl;
		map <string, double> mapa;
		cont = 0;
		while (getline(cin, palavra) && palavra != ""){
			cont++;
			mapa[palavra]++;
		}
		for (map<string, double>::iterator it = mapa.begin(); it != mapa.end(); ++it){
			cout << it->first << " ";
			printf("%.4lf\n", it->second/cont*100);
		}
		eh = true;
	}
	return 0;
}
