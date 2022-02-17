#include "dijkstra.hpp"

int main(int argc, char *argv[])
{
    int inicio, fim, op;
    
	Grafo g(5);

	g.addAresta(0, 1, 4);
	g.addAresta(0, 2, 2);
	g.addAresta(0, 3, 5);
	g.addAresta(1, 4, 1);
	g.addAresta(2, 1, 1);
	g.addAresta(2, 3, 2);
	g.addAresta(2, 4, 1);
	g.addAresta(3, 4, 1);

    cout << "Dijkstra - software buscador de menor caminho! " << endl;

	do{
		cout << "Menu: " << endl;
		cout << "o - sair" << endl;
		cout << "1 - imprimir grafo" << endl;
		cout << "2 - checar caminhos" << endl;
		cin >> op;
		switch (op)
		{
		case 0:	
			return 0;
			break;
		case 1:
			cout << "indisponível no momento!" << endl;
			break;
		case 2: 
			cout << "De onde está partindo ? " << endl;
			cin >> inicio;
			cout << "Onde deseja ir ? " << endl;
			cin >> fim;
			cout << "\n\ndistância mínima: " << g.dijkstra(inicio, fim) << endl;
			break;
		default:
			cout << "Digite uma opção válida!" << endl;
			break;
		}
	}while(op != 0);
	
	return 0;
}