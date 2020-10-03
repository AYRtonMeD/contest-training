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

void binaryTreeAddElement (struct binary_tree* bt, char c, int v){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->character = c;
    n->value = v;
    n->esq = NULL;
    n->dir = NULL;

    Node node* atual = binary_tree->first_node;

    if (atual == NULL){
        binary_tree->first_node = n;
        return;
    }

    while (true){
        if (atual->value <= v){
            if (atual->dir != NULL) atual = atual->dir;
            else {
                atual->dir = n;
                return;
            }
        }
        else if (atual->value >= v){
            if (atual->esq != NULL) atual = atual->esq;
            else {
                atual->esq = n;
                return;
            }
        }
    }
}



