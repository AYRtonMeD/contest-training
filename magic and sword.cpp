#include <iostream>
#include <cmath>
using namespace std;

bool eh (double x1, double x2, double y1, double y2, double r2);
void dano (double w, double h, double x1, double y1, double r1, double x2, double y2, int dano, double r2);

int main(){
    double w, h, x1, y1, raio, x2, y2;
    int nivel, n;
    string tipo;
    cin >> n;
    int fire[4] = {200, 20, 30, 50};
    int water[4] = {300, 10, 25, 40};
    int earth[4] = {400, 25, 55, 70};
    int air[4] = {100, 18, 38, 60};

    for (int i = 0; i < n; i++){
        cin >> w >> h >> x1 >> y1;
        cin >> tipo >> nivel >> x2 >> y2;

        raio = sqrt(pow(h, 2) + pow(w, 2))/2;
        x1 = x1 + (w/2);
        y1 = y1 + (h/2);

        if (tipo == "fire"){
            dano(w,h,x1,y1,raio, x2, y2, fire[0], fire[nivel]);
        }
        else if (tipo == "air"){
            dano(w,h,x1,y1,raio, x2, y2, air[0], air[nivel]);
        }
        else if (tipo == "water"){
            dano(w,h,x1,y1,raio, x2, y2, water[0], water[nivel]);
        }
        else{
            dano(w,h,x1,y1,raio, x2, y2, earth[0], earth[nivel]);
        }
    }
    return 0;
}

void dano (double w, double h, double x1, double y1, double r1, double x2, double y2, int dano, double r2){

    if (( x2 >= x1 - (w/2) && x2 <= x1 + (w/2) ) && ( y2 >= y1 - (h/2) && y2 <= y1 + (h/2) )){
        cout << dano << endl;
    }
    else if (( x2 >= x1 - (w/2) ) && ( x2 <= x1 + (w/2) ) ){
        if ( ( ( y1 - (h/2) ) - r2 ) <= y2 && y2 <= ( y1-(h/2) ) ) cout << dano << endl;
        else if ( ( ( y1 + (h/2) ) + r2 ) >= y2 && ( y2 >= y1 + (h/2) ) ) cout << dano <<endl;
        else cout << "0" << endl;
    }

    else if (y2 >= y1 - (h/2) && y2 <= y1 + (h/2)){
        if (( x1 - (w/2) ) - r2 <= x2 && x2 <= x1-(w/2)) cout << dano << endl;
        else if (( x1 + (w/2) ) + r2 >= x2 && x2 >= x1 + (w/2)) cout << dano <<endl;
        else cout << "0" << endl;
    }
    else{

        if ( eh( (x1 - (w/2) ) , x2, (  y1 - (h/2) ) , y2, r2) ||
            eh( (x1 - (w/2) ) , x2, (  y1 + (h/2) ) , y2, r2) ||
            eh( (x1 + (w/2) ) , x2, (  y1 - (h/2) ) , y2, r2) ||
            eh( (x1 + (w/2) ) , x2, (  y1 + (h/2) ) , y2, r2)) cout << dano << endl;
        else cout << "0" << endl;
    }
}

bool eh (double x1, double x2, double y1, double y2, double r2){
    double lado = abs(x1 - x2);
    double altura = abs(y1 - y2);

    if ( sqrt(pow(lado, 2) + pow(altura, 2) ) <= r2) return true;
    else return false;
}










