#include "stack.h"

int main() {
    stack S;
    string txt = "ATADRUTKURTS";

    createStack(S);

    for (char c : txt) {
        push(S, c);
    }

    printInfo(S);

    for (int i = 0; i < 8; i++) {
        pop(S);
    }

    printInfo(S);

    return 0;
}
