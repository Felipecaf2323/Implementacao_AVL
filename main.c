#include <stdio.h>
#include "bst.h"

int main() {
	Tree t = createTree();
	
	/*
	AVLinsert(t, 4);
	AVLinsert(t, 3);
	AVLinsert(t, 2);
	AVLinsert(t, 1);
	*/
	
	
	AVLinsert(t, 50);
	AVLinsert(t, 15);
	AVLinsert(t, 25);
	AVLinsert(t, 20);
	AVLinsert(t, 30);	
	AVLinsert(t, 10);	
	AVLinsert(t, 12);
	
	
	imprime(t, "oi");
	
	return 0;
}
