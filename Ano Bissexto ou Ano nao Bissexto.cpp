#include <iostream>
using namespace std;

int len(string palavra){
    int l = 0;
    for (int i = 0; palavra[i] != '\0'; i++) l++;
    return l-1;
}

bool ehBulukulu(string palavra){
    int impares = 0, pares = 0, i;
    for (i = 0; palavra[i+1] != '\0'; i++){
        if (i % 2 == 0) impares += (int)palavra[i] - 48;
        else pares += (int)palavra[i] - 48;
    }
    if ( (impares - pares) % 11 == 0 && i % 2 == 1){
        return true;
    }
    if ( (pares - impares) % 11 == 0 && i % 2 == 0){
        return true;
    }
    return false;
}

bool ehHuluculu(string palavra){
    int l = -1;
    int total = 0;
    for (int i = 0; palavra[i] != '\0'; i++){
        total += (int)palavra[i] - 48;
        l++;
    }
    if ( (palavra[l] == '0' || palavra[l] == '5') && total % 3 == 0){
        return true;
    }
    return false;
}

int ehBixessto(string palavra){
    int eh = 0;
    int lenght = len(palavra);
    int num1 = (int)palavra[lenght]- 48 + (((int)palavra[lenght-1] - 48)*10);
    int num2 = (((int)palavra[lenght-2] - 48)) + (((int)palavra[lenght-3] - 48)*10);

    if (num1 % 4 == 0){
        if (num1 == 0 && num2 % 4 != 0) eh = 0;
        else{
            eh = 1;
            cout << "This is leap year.\n";
        }
    }
    if (ehHuluculu(palavra)){
        cout << "This is huluculu festival year.\n";
        eh += 2;
    }
    if (ehBulukulu(palavra) && (eh == 1 || eh == 3)) cout << "This is bulukulu festival year.\n";
    return eh;
}

int main(){
    string num;
    int n = 0;

    while (cin >> num){
        if (n != 0) cout << endl;
        n++;
        if ( ehBixessto(num) == 0) cout << "This is an ordinary year.\n";

    }

    return 0;
}
