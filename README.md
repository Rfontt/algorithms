# BIT VS BYTE
 
 ## BIT 

 - Menor unidade de informação digital
 - Armazena 0 ou 1

 ## BYTE 

- Composto por 8 bits
- Um byte pode representar uma gama ampla de valores: caracteres, números, etc...

# Char

- Char é um tipo de dado primitivo que na memória é convertido para um inteiro
- Todo Char pode ser mapeado para um número
- Dentro do C++ e de muitas outras linguagens, o mapeamento é feito seguindo uma tabela de codificação, como por exemplo, ASCII, UTF-8, UTF-16
- Possui 1 byte
- Pode armazenar 256 valores diferentes

# String

- Uma string nada mais é do que um array de char
- String não é um tipo primitivo
- Quando você usa uma string em outra linguaguem, você está na verdade, usando implicitamente um array de char

# Pointeiros

- signed char = 8 bits (1 byte) | -128 até 127
- unsigned char = 8 bits | 0 a 255

# Stack

O que:

- É uma estrutura de dados com regras específicas de inserção e remoção
- Pode ser implementado com arrays ou lista encadeadas
- LIFO -> Last In, First out.

Onde são usadas:

- Gerenciamento de chamada de funções (Pilha de execução)
- Processamento de expressões matemáticas
- Histórico de ações (navegador web por exemplo)

Operações básicas

- Push (adicionar ao topo da stack)
- Pop (remover elemento do topo da stack)
- Peek (consultar o elemento do topo sem remover)
- IsEmpty (retorna se a stack está vazia)

Tipos de memórias:

- heap: alocação dinâmica no c++ (new)
- stack: alocação não-dinâmica

# Linked List

- É uma estrutura de dados que organiza elementos de maneira sequencial
- Diferente dos vetores, uma lista não tem elementos contínuos na memória e são manualmente gerenciados por ponteiros.
- Cada elemento também é chamado de nó

Encadeamento

- O encadeamento (ligação) dos nós é o que caracteriza a lista encadeada
- Cada nó aponta para o próximo na sequencia
- O último nó da lista aponta para um endereço nulo, indicando assim, o final da lista

Vantagens 

- Inserção e remoção de elementos são eficientes, desde que você tenha uma referência para o nó onde deseja realizar a operação
- A lista encadeada pode crescer dinamicamente, pois não requer um tamanho fixo como um array.

Desvantagens 

- A busca de um elemento em uma lista encadeada é menos eficiente do que em um array, pois é necessário percorrer a lista sequenciamente para encontrar um elemento específico.
- Maior uso de memória devido aos ponteiros adicionais necessários


Vetores Vs Listas

Vetores 

- Tem tamanho fixo
- Acesso rápido a memória
- Inserção / Remoção Ineficiente
- Espaço contíguo

Listas

- Tamanho dinâmico 
- Acesso Lento
- Inserção / Remoção Eficiente
- Espaço não contíguo

# Queue

Onde são usadas:

- Simulação de processos
- Algoritmos de Busca em Largura (BFS)
- Sistema de impressão
- Ordem de atendimento em filas
- Redes de Computadores (Pacotes de Dados)
- Controle de fluxo de produção (Linhas de produção)

Operações básicas:

- Enqueue (Adicionar no fim)
- Dequeue (Remover elemento do início da fila)
- Front (Consulta do início da fila sem remover)
- IsEmpty (Retorna se a queue está vazia)

# Doubly Linked List

Estrutura: Cada nó contém três campos: um campo de dados, um ponteiro para o próximo nó e um ponteiro para o nó anterior.
Direção: A lista é navegável em ambas as direções, ou seja, pode-se ir do primeiro nó ao último e vice-versa.

Vantagens:
- Permite navegação bidirecional, facilitando certas operações, como reversão da lista ou remoção de nós.
- Inserções e remoções de nós podem ser mais eficientes, pois é possível acessar diretamente o nó anterior e o nó seguinte.

Desvantagens:

- Maior uso de memória, pois cada nó armazena dois ponteiros adicionais.
- Estrutura mais complexa de implementar e gerenciar devido aos ponteiros adicionais.

# Double Ended Queue - DEQUE

O que é:

- DEQUE é uma estrutura de dados que permite a inserção eficiente de elementos tanto no início, quanto no final da coleção.
- É uma fila de duas pontas

Onde é usado:

- Implementação de filas com prioridades (Priority Queues)
- Algoritmos de busca (BFS)
- Sliding Window
- Algoritmo de ordenação
- Histórico de Ações
- Processamento de Streams de Dados

# Map

O que é:

- É uma estrutura associativa que permite armazenar pares chaves-valor
- Cada chave está associada a um valor correspondente
- A chave é usada para indexar o valor, permitindo uma rápida recuperação do valor com base na chave
- O map é uma implementação complexa baseada normalmente em árvores binárias de busca

Onde é usado:

- É usado amplamente para própositos diversos em programação
- Armazenamento de configurações 
- Cache
- Mapeamento de IDs
- Implementação de grafos
- Gerenciamento de sessão

**Mapas Ordenados**

- Elementos são armazenados em uma árvore de busca binária balanceada
- Os elementos são armazenados em ordem crescente com base nas chaves
- Complexidade dde inserção e busca é log n
- Você pode acessar os elementos por suas chaves e obter uma ordem determinística dos elementos

**Mapas desordenados**

- Os elementos são armazenados em uma tabela de dispersão (hash table). Não há garantia de ordem específica para os elementos
- A complexidade de inserção e busca geralmente é O(1), podendo ser O(n), em casos raros
- Você não tem a garantia de uma ordem específica ao acessar os elementos por suas chaves. A ordem dos elementos pode depender das funções de hash e colisão

Qual usar?

- Use um mapa ordenado quando precisar de elementos ordenados com base nas chaves e não se importar com a eficiência de inserção e busca
- Use um mapa desordenado quando a ordem dos elementos não for importante, e você precisar de inserções e buscas rápidas, especialmente em grandes volume de dados.