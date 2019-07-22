#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int quantgas, raio;
    cin >> raio >> quantgas;
    cout << (int)(quantgas/ ((raio*raio*raio*3.1415*4)/3)) << endl;
    return 0;
}
