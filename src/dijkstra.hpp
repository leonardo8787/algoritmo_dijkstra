#ifndef dijkstra_hpp
#define dijkstra_hpp

#include <iostream>
#include <list>
#include <queue>
#define INFINITO 10000000

using namespace std;

class Grafo {
    private:
        int V; 
        list<pair<int, int> > * adj;
    public:
        Grafo(int V);
        void addAresta(int v1, int v2, int custo);
        int dijkstra(int orig, int dest);
};

#endif