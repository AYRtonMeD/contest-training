#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int n, lenght;
    double total;
    cin >> n;

    for (int j = 0; j < n; j++){
        cin >> lenght;
        total = 0;
        for (int i = 1; i <= lenght; i++){
            total += pow(2, i-1)/1000;
        }
        cout << ( (long long unsigned int)total/12 ) << " kg\n";
    }
    return 0;
}
