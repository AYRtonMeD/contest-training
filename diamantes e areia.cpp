#include <iostream>
#include <stack>
using namespace std;

int main(){
    string palavra;
    int n, quant;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> palavra;
        quant = 0;
        stack <bool> d;
        for (int j = 0; palavra[j] != '\0'; j++){
            if (palavra[j] == '<') d.push(true);
            else if (palavra[j] == '>' && !d.empty()){
                quant++;
                d.pop();
            }
        }
        cout << quant <<endl;

    }
    return 0;
}
