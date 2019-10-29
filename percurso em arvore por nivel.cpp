#include <iostream>
#include <queue>
using namespace std;

struct node{
  int val;
  struct node *left;
  struct node *right;
};
struct tree{
  struct node *inicio;
};

tree* criar_arvore (){
  struct tree* arvore;
  arvore = (tree*)malloc(sizeof(tree));
  arvore->inicio = NULL;
  return arvore;
}

void add_node(int val, struct node* atual, struct node* new_node){

  if (val < atual->val){
    if (atual->left == NULL){
      atual->left = new_node;
    }
    else add_node(val, atual->left, new_node);
  }

  else if (val > atual->val){
    if (atual->right == NULL){
      atual->right = new_node;
    }
    else add_node(val, atual->right, new_node);
  }
}


void adicionar(struct tree* arvore, int val){
    struct node* new_node = (node*)malloc(sizeof(node));
    new_node->val = val;
    new_node->left = NULL;
    new_node->right = NULL;

  if (arvore->inicio == NULL){
    arvore->inicio = new_node;
  }
  else add_node(val, arvore->inicio, new_node);
}

int main() {
  int n, quant, num;
  bool eh;

  cin >> n;

  for (int i = 0; i < n; i++){
    struct tree* arvore = criar_arvore();
    queue <struct node*> fila;
    eh = false;

    cin >> quant;
    for (int j = 0; j < quant; j++){
      cin >> num;
      adicionar(arvore, num);
    }
    cout << "Case " << i+1 << ":\n";
    fila.push(arvore->inicio);

    while (!fila.empty()){
        if (fila.front()->left != NULL) fila.push(fila.front()->left);
        if (fila.front()->right != NULL) fila.push(fila.front()->right);
        if (eh) cout << " ";
        cout << fila.front()->val;
        fila.pop();
        eh = true;
    }
    cout << "\n\n";

  }
  return 0;
}

