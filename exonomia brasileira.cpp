#include <iostream>
using namespace std;

int main(){
    int n, g = 0, ng = 0, o;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> o;
        if (o) ng++;
        else g++;
    }
    if (g > ng) cout << "Y";
    else cout << "N";
    cout << endl;
    return 0;
}
