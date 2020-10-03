#include <bits/stdc++.h>
using namespace std;

string generateLine (char c, int s){
    string str;

    for (int i = 0; i < s; i++){
        str += c;
    }

    return str;
}

string generateRow (char c, int s){
    string row;

    row += " ";
    row += generateLine (c, s);
    row += " ";

    return row;
}

string generateColumn (char c1, char c2, int s){
    string column;

    column += c1;
    column += generateLine (' ', s);
    column += c2;

    return column;
}

void print(string n[10][5], string numero, int c, int qloop){
    for (int j = 0; j < qloop; j++){
        for (int i = 0; numero[i] != '\0'; i++){
            int index = numero[i] - 48;

            cout << n[index][c];

            if (numero[i+1] != '\0') cout << ' ';
        }
        cout << endl;
    }
}

void printLines (string numero, int s){
    string sEmpty = generateRow (' ', s);
    string sFull = generateRow ('-', s);
    string sDouble = generateColumn('|', '|', s);
    string sLeft = generateColumn('|', ' ', s);
    string sRight = generateColumn(' ', '|', s);

    string n[10][5] = {  sFull, sDouble, sEmpty, sDouble, sFull,
                        sEmpty, sRight, sEmpty, sRight, sEmpty,
                        sFull, sRight, sFull, sLeft, sFull,
                        sFull, sRight, sFull, sRight, sFull,
                        sEmpty, sDouble, sFull, sRight, sEmpty,
                        sFull, sLeft, sFull, sRight, sFull,
                        sFull, sLeft, sFull, sDouble, sFull,
                        sFull, sRight, sEmpty, sRight, sEmpty,
                        sFull, sDouble, sFull, sDouble, sFull,
                        sFull, sDouble, sFull, sRight, sFull
    };

    print(n, numero, 0, 1);
    print(n, numero, 1, s);
    print(n, numero, 2, 1);
    print(n, numero, 3, s);
    print(n, numero, 4, 1);

}

int main (){
    string numero;
    int s;
    bool eh = false;


    while (cin >> s >> numero && (s != 0)){

        printLines(numero, s);
        cout << endl;
    }

    return 0;
}
