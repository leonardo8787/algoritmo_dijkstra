# algoritmo_dijkstra
O algoritmo de Dijkstra, concebido pelo cientista da computação holandês Edsger Dijkstra em 1956 e publicado em 1959, soluciona o problema do caminho mais curto num grafo dirigido ou não dirigido.


<h2>Execução</h2>

Para executar o software, visto que estou utilizando makefile, deverá seguir os seguintes passos:

~~~
make

make run
~~~

<h2>Funcionamento do software</h2>

O algoritmo de Dijkstra, concebido pelo cientista da computação holandês Edsger Dijkstra em 1956 e publicado em 1959, soluciona o problema do caminho mais curto num grafo dirigido ou não dirigido com arestas de peso não negativo, em tempo computacional O(|E|*|V|*Log(V)) onde V é o número de vértices e E é o número de arestas. O algoritmo que serve para resolver o mesmo problema em um grafo com pesos negativos é o algoritmo de Bellman-Ford, que possui maior tempo de execução que o Dijkstra.

O algoritmo considera um conjunto S de menores caminhos, iniciado com um vértice inicial I. A cada passo do algoritmo busca-se nas adjacências dos vértices pertencentes a S aquele vértice com menor distância relativa a I e adiciona-o a S e, então, repetindo os passos até que todos os vértices alcançáveis por I estejam em S. Arestas que ligam vértices já pertencentes a S são desconsideradas.

Um exemplo prático do problema que pode ser resolvido pelo algoritmo de Dijkstra é: alguém precisa se deslocar de uma cidade para outra. Para isso, ela dispõe de várias estradas, que passam por diversas cidades. Qual delas oferece uma trajetória de menor caminho?

<p align = "center">
    <img src="https://upload.wikimedia.org/wikipedia/commons/5/57/Dijkstra_Animation.gif" alt="dijkstra" width="300"></img>
</p>

<h4>1° passo</h4>

iniciam-se os valores:

~~~
para todo v ∈ V[G]
     d[v] ← ∞
     π[v] ← -1
d[s] ← 0
~~~

V[G] é o conjunto de vértices(v) que formam o Grafo G. d[v] é o vetor de distâncias de s até cada v. Admitindo-se a pior estimativa possível, o caminho infinito. π[v] identifica o vértice de onde se origina uma conexão até v de maneira a formar um caminho mínimo.

<h4>2° passo</h4>

temos que usar o conjunto Q, cujos vértices ainda não contém o custo do menor caminho d[v] determinado.

~~~
Q ← V[G]
~~~

<h4>3° passo</h4>

realizamos uma série de relaxamentos das arestas, de acordo com o código:

~~~
enquanto Q ≠ ø
         u ← extrair-mín(Q)                     //Q ← Q - {u}
         para cada v adjacente a u
              se d[v] > d[u] + peso(u, v)          //relaxe (u, v)
                 então d[v] ← d[u] + peso(u, v)
                       π[v] ← u
~~~

peso(u, v) é o peso da aresta que vai de u a v.

u e v são vértices quaisquer e s é o vértice inicial. ffd extrair-mín(Q), pode usar um heap de mínimo ou uma lista de vértices onde se extrai o elemento u com menor valor d[u].

No final do algoritmo teremos o menor caminho entre s e qualquer outro vértice de G. O algoritmo leva tempo O(m + n log n) caso seja usado um heap de Fibonacci, O(m log n) caso seja usado um heap binário e O(n²) caso seja usado um vetor para armazenar Q.

O algoritmo de Dijkstra é um exemplo de algoritmo guloso que gera a solução ótima em tempo polinomial.
