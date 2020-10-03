#include <bits/stdc++.h>

struct Node{
    char character;
    int value;
    struct Node* esq;
    struct Node* dir;
};

struct binary_tree{
    struct Node* first_node;
};

struct binary_tree* criarArvoreBinaria (){
    struct binary_tree* bt = (binary_tree*)malloc(sizeof(binary_tree));
    bt->first_node = NULL;
    return bt;
}

void binaryTreeAddElement (char c, int v){

}

int main(){

}
