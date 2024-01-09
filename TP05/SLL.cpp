#include "SLL.h"

void createList(List &L) {
    L.first = NULL;
}

address allocate(int data) {
    address p = new elmlist();

    p->info = data;
    p->next = NULL;

    return p;
}

void insertLast(List &L, address p) {
    if (L.first == NULL) {
        L.first = p;
    } else {
        address x = L.first;

        while (x->next != NULL) {
            x = x->next;
        }

        x->next = p;
        p->next = NULL;
    }
}

void showAll(List L) {
    address p = L.first;

    while (p != NULL) {
        cout << p->info << " ";
        p = p->next;
    }

    cout << endl;
}

address findMax(List L) {
    if (L.first == NULL) {
        return NULL;
    }

    address p = L.first;
    address x = L.first;

    while (p != NULL) {
        if (p->info > x->info) {
            x = p;
        }

        p = p->next;
    }

    return x;
}

void showMiddle(List L) {
    int n = 0;
    address p = L.first;

    while (p != NULL) {
        n++;
        p = p->next;
    }

    if (n == 0) {
        // tidak melakukan apa-apa
    } else if (n == 1) {
        cout << L.first->info << endl;
    } else {
        p = L.first;
        n /= 2;

        while (n--) {
            p = p->next;
        }

        cout << p->info << endl;
    }
}
