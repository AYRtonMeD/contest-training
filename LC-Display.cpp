#include <iostream>
#include <cstdio>

using namespace std;

string horizontal(int len, char c){
    string palavra = "";
    for (int x = 0; x < len; x++){
        palavra += c;
    }
    return palavra;
}

void num (int len, string numero){

    string v1 = ' ' + horizontal(len, '-')+ ' ';
    string v2 = ' ' + horizontal(len, ' ') + ' ';
    string v4 = horizontal(len, ' ');
    string v3 = '|' + v4 + '|';
    string v5 = '|' + v4 + ' ';
    string v6 = ' ' + v4 + '|';

    string lista0[5] = {v1,v3,v2,v3,v1};
    string lista1[5] = {v2,v6,v2,v6,v2};
    string lista2[5] = {v1,v6,v1,v5,v1};
    string lista3[5] = {v1,v6,v1,v6,v1};
    string lista4[5] = {v2,v3,v1,v6,v2};
    string lista5[5] = {v1,v5,v1,v6,v1};
    string lista6[5] = {v1,v5,v1,v3,v1};
    string lista7[5] = {v1,v6,v2,v6,v2};
    string lista8[5] = {v1,v3,v1,v3,v1};
    string lista9[5] = {v1,v3,v1,v6,v1};

    for (int i = 0; i < 5; i++){
        if (i % 2 == 0){
            for (int j = 0; numero[j] != '\0'; j++){

                switch(numero[j]){
                    case '0':
                        cout << lista0[i];
                        break;
                    case '1':
                        cout << lista1[i];
                        break;
                    case '2':
                        cout << lista2[i];
                        break;
                    case '3':
                        cout << lista3[i];
                        break;
                    case '4':
                        cout << lista4[i];
                        break;
                    case '5':
                        cout << lista5[i];
                        break;
                    case '6':
                        cout << lista6[i];
                        break;
                    case '7':
                        cout << lista7[i];
                        break;
                    case '8':
                        cout << lista8[i];
                        break;
                    case '9':
                        cout << lista9[i];
                        break;
                }
                cout << " ";
            }
            cout << endl;

        }
        else{
            for (int k = 0; k < len; k++){
                for (int j = 0; numero[j] != '\0'; j++){

                    switch(numero[j]){
                    case '0':
                        cout << lista0[i];
                        break;
                    case '1':
                        cout << lista1[i];
                        break;
                    case '2':
                        cout << lista2[i];
                        break;
                    case '3':
                        cout << lista3[i];
                        break;
                    case '4':
                        cout << lista4[i];
                        break;
                    case '5':
                        cout << lista5[i];
                        break;
                    case '6':
                        cout << lista6[i];
                        break;
                    case '7':
                        cout << lista7[i];
                        break;
                    case '8':
                        cout << lista8[i];
                        break;
                    case '9':
                        cout << lista9[i];
                        break;
                    }
                    cout << " ";
                }
                cout << endl;
            }
        }
    }
    cout << endl;
}

int main(){
    int height;
    string number;

    while (cin >> height >> number && (height != 0 || number != "0")){

            num(height, number);

    }

    return 0;
}
