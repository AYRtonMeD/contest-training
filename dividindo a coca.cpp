#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){
    double n, c, q, b, B, h, f, v;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> c >> q;
        cin >> b >> B >> h;

        v = q/c;
        if (B == b) printf("%.2f\n", v / M_PI / pow(b,2));
        else {
            f = h/ (B-b);

            printf("%.2lf\n", f * ( pow( (3 * v / (f * M_PI) + pow(b, 3)), (1.0/3.0) ) - b));
        }
    }
    return 0;
}
