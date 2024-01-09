#ifndef ADT1_H_INCLUDED
#define ADT1_H_INCLUDED

#include <iostream>
using namespace std;

typedef struct vertex *adrVertex;
typedef struct edge *adrEdge;

struct vertex {
    char vertexID;
    adrVertex nextVertex;
    adrEdge firstEdge;
};

struct edge {
    char destVertexID;
    int weight;
    adrEdge nextEdge;
};

struct graph {
    adrVertex firstVertex;
};

void createVertex(char newVertexID, adrVertex &v);
void initGraph(graph &G);
void addVertex(graph &G, char newVertexID);
void buildGraph(graph &G);

#endif // ADT_H_INCLUDED
