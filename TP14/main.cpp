#include "adt1.h"

int main() {
    graph G;
    adrVertex v;

    initGraph(G);
    buildGraph(G);

    cout << endl << "ID Vertex dari Graph:" << endl;
    v = G.firstVertex;

    while (v != NULL) {
        cout << v->vertexID << endl;
        v = v->nextVertex;
    }

    return 0;
}
