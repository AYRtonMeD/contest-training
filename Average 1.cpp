#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double n1, n2, media;
    cin >> n1 >> n2;

    media = ((n1 * 3.5) + (n2 * 7.5)) /11;

    printf("MEDIA = %.5lf\n", media);

    return 0;
}
