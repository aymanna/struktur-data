#include "stack.h"

void createStack(stack &S) {
    S.Top = 0;
}

bool isEmpty(stack S) {
    return S.Top == 0;
}

bool isFull(stack S) {
    return S.Top == 15;
}

void push(stack &S, infotype x) {
    if (!isFull(S)) {
        S.info[S.Top++] = x;
    }
}

int pop(stack &S) {
    if (!isEmpty(S)) {
        return S.info[S.Top--];
    }

    return NULL;
}

void printInfo(stack S) {
    for (int i = S.Top; i > -1; i--) {
        cout << S.info[i-1] << " ";
    }

    cout << endl;
}
