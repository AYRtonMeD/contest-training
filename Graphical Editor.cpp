#include <bits/stdc++.h>
using namespace std;
char mat[252][252];

void clearTable (int c, int l){
    for (int i = 1; i <= l; i++){
        for (int j = 1; j <= c; j++){
            mat[i][j] = 'O';
        }
    }
}

void createTable (int c, int l){
    clearTable (c, l);
}

void colorPixel (int x, int y, char color){
    mat[y][x] = color;
}

void verticalSegment (int x, int y1, int y2, char color){
    if (y1 > y2) swap (y1, y2);
    for (int i = y1; i <= y2; i++){
        mat[i][x] = color;
    }
}

void horizontalSegment (int x1, int x2, int y, char color){
    if (x1 > x2) swap (x1, x2);
    for (int i = x1; i <= x2; i++){
        mat[y][i] = color;
    }
}

void drawRetangule (int x1, int y1, int x2, int y2, char color){
    if (x1 > x2) swap (x1, x2);
    if (y1 > y2) swap (y1, y2);

    for (int i = y1; i <= y2; i++){
        for (int j = x1; j <= x2; j++){
            mat[i][j] = color;
        }
    }
}

void fillRetangule (int x, int y, char color, int c, int l, char colorAtual){
    mat[y][x] = color;

    if (x+1 < c && mat[y][x+1] == colorAtual) fillRetangule(x+1, y, color, c, l, colorAtual);
    if (x-1 > 0 && mat[y][x-1] == colorAtual) fillRetangule(x-1, y, color, c, l, colorAtual);//Essa
    if (y+1 < l && mat[y+1][x] == colorAtual) fillRetangule(x, y+1, color, c, l, colorAtual);
    if (y-1 > 0 && mat[y-1][x] == colorAtual) fillRetangule(x, y-1, color, c, l, colorAtual);//Essa
}

void nome (string name, int c, int l){
    cout << name << endl;

    for (int i = 1; i <= l; i++){
        for(int j = 1; j <= c; j++){
            cout << mat[i][j];
        }
        cout << endl;
    }
}

int main(){
    int c, l, x1, y1, x2, y2;
    char op, color;
    string name;

    while (cin >> op && op != 'X'){
        if (op == 'I') {
            cin >> c >> l;
            createTable(c, l);
        }
        else if (op == 'C'){
            clearTable(c, l);
        }
        else if (op == 'L'){
            cin >> x1 >> y1 >> color;
            colorPixel(x1, y1, color);
        }
        else if (op == 'V'){
            cin >> x1 >> y1 >> y2 >> color;
            verticalSegment(x1, y1, y2, color);
        }
        else if (op == 'H'){
            cin >> x1 >> x2 >> y1 >> color;
            horizontalSegment(x1, x2, y1, color);
        }
        else if (op == 'K'){
            cin >> x1 >> y1 >> x2 >> y2 >> color;
            drawRetangule(x1, y1, x2, y2, color);
        }
        else if (op == 'F'){
            cin >> x1 >> y1 >> color;
            fillRetangule(x1, y1, color, c, l, mat[y1][x1]);
        }
        else if (op == 'S'){
            cin >> name;
            nome(name, c, l);
        }
    }


    return 0;
}
