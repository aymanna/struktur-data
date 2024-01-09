#include "adt1.h"

void createVertex(char newVertexID, adrVertex &v) {
    v = new vertex;
    v->vertexID = newVertexID;
    v->nextVertex = NULL;
    v->firstEdge = NULL;
}

void initGraph(graph &G) {
    G.firstVertex = NULL;
}

void addVertex(graph &G, char newVertexID) {
    adrVertex v, last;

    v = G.firstVertex;

    while (v != NULL) {
        if (v->vertexID == newVertexID) return; // ada duplikat
        v = v->nextVertex;
    }

    createVertex(newVertexID, v);

    if (G.firstVertex == NULL) {
        G.firstVertex = v;
    } else {
        last = G.firstVertex;

        while (last->nextVertex != NULL) {
            last = last->nextVertex;
        }

        last->nextVertex = v;
    }
}

void buildGraph(graph &G) {
    char c;

    cout << "Masukkan ID graf (A-Z): ";
    cin >> c;

    while (c >= 'A' && c <= 'Z') {
        addVertex(G, c);
        cout << "Masukkan ID graf (A-Z): ";
        cin >> c;
    }

    cout << endl << "ID tersebut tidak valid. Pembentukan graf selesai." << endl;
}
