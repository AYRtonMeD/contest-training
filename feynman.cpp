#include <iostream>
using namespace std;

int main(){
    int p;
    int total;
    while (cin >> p && p != 0){
        total = 0;
        for (int i = 0; i < p; i++){
            total += p*p/(i+1)*(i+1);
        }
        cout << total << endl;
    }
    return 0;
}
