/*
VETORES - ARRAY

1. Declaração e Inicialização
Em C++, arrays têm tamanho fixo, enquanto vector pode ter tamanho variável, e ambos armazenam elementos do mesmo tipo. A sintaxe básica para declarar e inicializar um array é:

    int numeros[5]; // Declara um vetor de inteiros com 5 posições

Podemos também inicializar o vetor no momento da declaração:

    int numeros[5] = {10, 20, 30, 40, 50}; // Inicializa o vetor com valores específicos

Caso não forneça todos os valores, as posições restantes serão preenchidas com zeros:

    int numeros[5] = {10, 20}; // Vetor terá {10, 20, 0, 0, 0}

2. Acesso aos Elementos do Vetor
Para acessar um elemento específico do vetor, usamos o índice (começando de 0):

    int valor = numeros[2]; // Acessa o terceiro elemento do vetor (números[2] = 30)

Podemos também modificar os valores de um vetor através de seus índices:

    numeros[0] = 15; // Muda o primeiro elemento para 15

*/

#include <iostream>

using namespace std;

int main(){
    // declaracoa de um vetor de inteiros com 5 posicoes
    int numeros[5] = {1, 2, 3, 4, 5};

    // percorrendo e exibindo os elementos do vetor
    for(int i = 0; i < 5; i++){
        cout << "Elemento " << i << ": " << numeros[i] << endl;
    }

    return 0;
}