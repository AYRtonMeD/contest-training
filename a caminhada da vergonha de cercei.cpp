#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, x1, x2, y2;
    double menorCaminho, menorx = 0;

    cin >> n >> x1;

    for (int i = 0; i < n; i++){
        cin >> x2 >> y2;
        if (x2 >= 0 &&  x2 <= x1){
            if(abs(y2) > menorx){
                menorx = abs(y2);
                menorCaminho = x2;
            }
        }
        else{
            double hipot;
            double newx;
            if (x2 < 0){
                hipot = sqrt( pow(x2, 2) + pow(y2, 2) );
                newx = 0;
            }
            else{
                hipot = sqrt( pow(x2-x1, 2) + pow(y2, 2));
                newx = x1;
            }
            if (hipot > menorx){
                menorx = hipot;
                menorCaminho = newx;
            }
        }
    }
    cout  << menorCaminho << endl;
    cout << menorx << endl;
    return 0;
}
