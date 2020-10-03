#include <bits/stdc++.h>

struct Node{
    int val;
    struct Node* next_node;
};
struct lista_encadeada{
    struct Node* first_node;
    int lenght;
};

struct lista_encadeada* criarListaEncadeada (){
    struct lista_encadeada* le = (struct lista_encadeada*) malloc (sizeof(struct lista_encadeada));
    le->first_node = NULL;
    int lenght = 0;
}

void ListAdicionarElemento(int val, struct lista_encadeada* l){
    struct Node* n = (struct Node*) malloc (sizeof(struct Node));
    n->val = val;
    n->next_node = NULL;

    if (l->first_node == NULL)
        l->first_node = n;

    else if (l->first_node->val > n->val){
        n->next_node = l->first_node;
        l->first_node = n;
    }
    else{
        struct Node* atual = l->first_node;
        while (atual->next_node != NULL && atual->next_node->val < n->val) atual = atual->next_node;
        n->next_node = atual->next_node;
        atual->next_node = n;
    }
    ++l->lenght;
}

int ListRemoverElementoPos (int pos, struct lista_encadeada* l){
    if (pos >= l->lenght || pos < 0) return -1;

    --l->lenght;

    struct Node* atual = l->first_node;
    if (pos == 0){
        l->first_node = atual->next_node;
        free(atual);
        return 0;
    }
    for (int i = 0; i < pos - 1; i++){
        atual = atual->next_node;
    }
    struct Node* backup = atual->next_node;
    atual->next_node = backup->next_node;

    free(backup);
    return 0;
}

int main(){

    struct lista_encadeada* l = criarListaEncadeada();
    ListAdicionarElemento(10, l);
    ListAdicionarElemento(400, l);
    ListAdicionarElemento(30, l);
    ListRemoverElementoPos(0, l);
    struct Node* n = l->first_node;
    for (int i = 0; i < l->lenght; i++){
        std::cout << n->val;
        n = n->next_node;
    }
    return 0;
}
