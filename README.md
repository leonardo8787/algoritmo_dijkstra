# algoritmo_dijkstra
O algoritmo de Dijkstra, concebido pelo cientista da computação holandês Edsger Dijkstra em 1956 e publicado em 1959, soluciona o problema do caminho mais curto num grafo dirigido ou não dirigido.


<h2>Execução</h2>

Para executar o software, visto que estou utilizando makefile, deverá seguir os seguintes passos:

~~~
make

make run
~~~

<h2>Funcionamento do software</h2>

O algoritmo de Dijkstra, concebido pelo cientista da computação holandês Edsger Dijkstra em 1956 e publicado em 1959,[1][2] soluciona o problema do caminho mais curto num grafo dirigido ou não dirigido com arestas de peso não negativo, em tempo computacional {\displaystyle O(E+V\log(V))}{\displaystyle O(E+V\log(V))} onde V é o número de vértices e E é o número de arestas. O algoritmo que serve para resolver o mesmo problema em um grafo com pesos negativos é o algoritmo de Bellman-Ford, que possui maior tempo de execução que o Dijkstra.

O algoritmo considera um conjunto S de menores caminhos, iniciado com um vértice inicial I. A cada passo do algoritmo busca-se nas adjacências dos vértices pertencentes a S aquele vértice com menor distância relativa a I e adiciona-o a S e, então, repetindo os passos até que todos os vértices alcançáveis por I estejam em S. Arestas que ligam vértices já pertencentes a S são desconsideradas.

Um exemplo prático do problema que pode ser resolvido pelo algoritmo de Dijkstra é: alguém precisa se deslocar de uma cidade para outra. Para isso, ela dispõe de várias estradas, que passam por diversas cidades. Qual delas oferece uma trajetória de menor caminho?

<p align = "center">
    <img src="https://pt.wikipedia.org/wiki/Ficheiro:Dijkstra_Animation.gif" alt="dijkstra" width="600"></img>
</p>
