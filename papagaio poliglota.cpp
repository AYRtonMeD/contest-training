#include <iostream>
using namespace std;

int main(){
    string p;

    while (getline(cin, p)){
        if (p[0] == 'e') cout << "ingles";
        else if (p[0] == 'd') cout << "frances";
        else if (p[0] == 'n') cout << "portugues";
        else cout << "caiu";
        cout << endl;
    }
    return 0;
}
