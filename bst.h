#ifndef BST_H
#define BST_H

typedef struct node * link;
struct node {
  link l;
  link r;
  int item;
  int N;      
  int id;     
};

typedef struct tree {
  link head; 
  link z;    
} * Tree;

Tree createTree();


link rotR (Tree t, link h);

link rotL (Tree t, link h);

link search (Tree h, int query);

link insert (Tree h, int item);

link AVLinsert(Tree t, int item);

void imprimeEmOrdem (Tree t, link h);
void imprimePosOrdem (Tree t, link h);
void imprimePreOrdem (Tree t, link h, int k);

link AVLinsertR (Tree t,link h, int item);


void imprime(Tree a, char *s);
 
#endif 


