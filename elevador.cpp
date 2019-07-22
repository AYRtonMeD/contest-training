#include <iostream>
using namespace std;

int main(){
    int pesoMax, n, s, e;
    bool eh = false;
    cin >> n >> pesoMax;

    for (int i = 0; i < n; i++){
        cin >> s >> e;
        pesoMax += s;
        pesoMax -= e;
        if (pesoMax < 0){
            eh = true;
        }
    }
    if (eh) cout << "S";
    else cout << "N";
    cout << endl;
    return 0;
}
