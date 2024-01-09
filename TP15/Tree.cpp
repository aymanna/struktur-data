#include "Tree.h"

adrNode newNode(infotype x) {
    adrNode p = new node;

    p->info = x;
    p->left = NULL;
    p->right = NULL;

    return p;
}

adrNode findNode(adrNode root, infotype x) {
    if (root != NULL) {
        if (x < root->info) {
            return findNode(root->left, x);
        } else if (x > root->info) {
            return findNode(root->right, x);
        }

        return root;
    }

    return NULL;
}

void insertNode(adrNode &root, adrNode p) {
    if (root == NULL) {
        root = p;
    } else {
        if (p->info < root->info) {
            insertNode(root->left, p);
        } else {
            insertNode(root->right, p);
        }
    }
}

void printPreOrder(adrNode root) {
    if (root != NULL) {
        cout << root->info << " ";
        printPreOrder(root->left);
        printPreOrder(root->right);
    }
}

void printDescendant(adrNode root, infotype x) {
    adrNode p = findNode(root, x);

    if (p != NULL) {
        printPreOrder(p->left);
        printPreOrder(p->right);
    }
}

int sumNode(adrNode root) {
    if (root == NULL) return 0;

    return root->info + sumNode(root->left) + sumNode(root->right);
}

int countLeaves(adrNode root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;

    return countLeaves(root->left) + countLeaves(root->right);
}

int heightTree(adrNode root) {
    if (root == NULL) return -1;

    int leftHeight = heightTree(root->left);
    int rightHeight = heightTree(root->right);
    int mx = leftHeight > rightHeight ? leftHeight : rightHeight;

    return 1 + mx;
}
