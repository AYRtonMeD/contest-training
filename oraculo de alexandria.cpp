#include <iostream>
using namespace std;

int len (string palavra){
    int i;
    for (i = 0; palavra[i] != '\0'; i++);
    return i;
}
int main(){
    int num, n, k, cont;
    long long int total;
    string palavra;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num >> palavra;
        total = 1;
        cont = len(palavra);
        k = 0;

        while (num - k >= 1){
            total *= num - k;
            k += cont;
        }
        cout << total << endl;
    }
    return 0;
}
