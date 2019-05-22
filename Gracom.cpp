#include <iostream>
using namespace std;

int main(){
    int n, latas, copos, total = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> latas >> copos;
        if (latas > copos) total += copos;
    }
    cout << total << endl;
    return 0;
}
