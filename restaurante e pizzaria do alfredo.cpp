#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double r, w, l;
    int cont = 1;

    while (cin >> r && r != 0 && cin >> w >> l){
        cout << "Pizza " << cont<< " ";
        if ( (r * 2) >= sqrt( w*w + l*l )) cout << "fits on the table.";
        else cout << "does not fit on the table.";
        cout << endl;
        cont++;
    }
    return 0;
}
