#include <iostream>
#include <map>
#include <vector>
using namespace std;


int main(){
    int n, origem, vertices, arestas, a, b, resposta;
    cin >> n;

    for (int x = 0; x < n; x++){
        cin >> origem;
        cin >> vertices >> arestas;
        bool grafo[vertices*vertices];
        resposta = 0;

        for (int i = 0; i < vertices*vertices; i++){
            grafo[i] = false;
        }

        for (int i = 0; i < arestas; i++){
            cin >> a >> b;
            if (a>b) grafo[b*vertices + a] = true;
            else grafo[a*vertices + b] = true;
        }
        for (int i = 0; i < vertices; i++){
            for (int j = 0; j < vertices; j++){
                if(grafo[i*vertices + j]) resposta++;
            }
        }
        cout << resposta*2<< endl;

    }

    return 0;
}
