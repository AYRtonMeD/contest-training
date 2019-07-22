#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b);
int ordenador (int lista[]);
bool pitagoras (int x, int y, int z);

int main(){
    int x, y, z;

    while (cin >> x >> y >> z) pitagoras(x,y,z);
    return 0;
}

int ordenador (int lista[]){
    if (lista[0] > lista[1]){
        lista[0] += lista[1];
        lista[1] = lista[0] - lista[1];
        lista[0] -= lista[1];
    }
    if (lista[1] > lista[2]){
        lista[1] += lista[2];
        lista[2] = lista[1] - lista[2];
        lista[1] -= lista[2];
    }
    if (lista[0] > lista[1]){
        lista[0] += lista[1];
        lista[1] = lista[0] - lista[1];
        lista[0] -= lista[1];
    }
}

bool pitagoras (int x, int y, int z){
    int lista[3] = {x,y,z};
    ordenador(lista);

    if ( pow(lista[0], 2) + pow(lista[1], 2) == pow(lista[2],2) ){
        if (gcd(lista[0], lista[1]) == 1 && gcd(lista[0], lista[2]) == 1){
            cout << "tripla pitagorica primitiva";
        }
        else cout << "tripla pitagorica";
    }
    else cout << "tripla";
    cout << endl;
}

int gcd(int a, int b) {
  while (b != 0)  {
    int t = b;
    b = a % b;
    a = t;
  }
  return a;
}
