#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
using namespace std;

typedef struct elmlist *address;

struct elmlist {
    int info;
    address next;
};

struct List {
    address first;
};

void createList(List &L);
address allocate(int data);
void insertLast(List &L, address p);
void showAll(List L);
address findMax(List L);
void showMiddle(List L);

#endif
