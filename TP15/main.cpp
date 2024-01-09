#include "Tree.h"
#include <stdio.h>
#include <string>

int main() {
    int x_list[] = {5,3,9,10,4,7,1,8,6};
    adrNode root, p;

    root = NULL;

    cout << string(80, '=') << endl;

    for (infotype x : x_list) {
        printf("%i ", x);
        p = newNode(x);
        insertNode(root, p);
    }
    printf("\n\n");

    printf("Pre Order       \t: ");
    printPreOrder(root);
    printf("\n\n");

    printf("Descendent of Node 9\t: ");
    printDescendant(root, 9);
    printf("\n\n");

    printf("Sum of BST Info \t: %i\n", sumNode(root));
    printf("Number of Leaves\t: %i\n", countLeaves(root));
    printf("Height of Tree  \t: %i\n", heightTree(root));

    cout << string(80, '=') << endl;

    return 0;
}
