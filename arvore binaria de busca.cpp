#include <iostream>
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

void pre_ordem(struct node* no){
  if (no != NULL){
    cout << " " << no->val;
    pre_ordem(no->left);
    pre_ordem(no->right);
  }
}

void pos_ordem(struct node* no){
  if (no != NULL){
    pos_ordem(no->left);
    pos_ordem(no->right);
    cout << " " << no->val;
  }
}

void ordem(struct node* no){
  if (no != NULL){
    ordem(no->left);
    cout << " " << no->val;
    ordem(no->right);
  }
}



int main() {
  int n, quant, num;

  cin >> n;

  for (int i = 0; i < n; i++){
    struct tree* arvore = criar_arvore();
    cin >> quant;
    for (int j = 0; j < quant; j++){
      cin >> num;
      adicionar(arvore, num);
    }
    cout << "Case " << i+1 << ":\n";
    cout << "Pre.:";
    pre_ordem(arvore->inicio);
    cout << "\nIn..:";
    ordem(arvore->inicio);
    cout << "\nPost:";
    pos_ordem(arvore->inicio);
    cout << "\n\n";
  }
  return 0;
}
