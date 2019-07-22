#include <iostream>
using namespace std;

int main(){
    int lenght, total;
    string num;

    while(cin >> lenght >> num){
        total = 0;

        for (int i = 0; i < lenght; i++){
            total += (int)num[i] - 48;
        }
        cout << total;
        if (total %3 == 0) cout << " sim\n";
        else cout << " nao\n";
    }

    return 0;
}
