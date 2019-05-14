#include<iostream>
#include <cstdio>

using namespace std;

int subAbs(int a, int b){
	if ((a-b) < 0){
		return (-(a-b));
	}
	return (a-b);
}

int main(){
	int n;
	int val;
	int lista1[3001];


	while(cin >> n && n!= 0){
		int var = 1;
		int eh = 0;
        int lista2[6001] = {};

		for (int i = 0;i < n; i++){
			cin >> lista1[i];
		}
		for (int i = 0; i < n-1; i++){
			val = subAbs(lista1[i], lista1[i+1]);

			lista2[val] = 1;

		}
		for (int i = 1;i < n;i++){
			if(lista2[i] == 1){
				eh ++;
				continue;
			}
			break;
		}

		if (eh == n-1){
			cout <<"Jolly";
		}
		else{
			cout<< "Not jolly";
		}
		cout << endl;
	}
}



