/*
MATRIZ e FOR ANINHADO

Uma matriz em C++ é um vetor bidimensional, ou seja, uma tabela com linhas e colunas. A declaração de uma matriz é feita especificando tanto o número de linhas quanto o de colunas.

Exemplo de Declaração:
    int matriz[3][3];  // Declara uma matriz 3x3 (3 linhas e 3 colunas)

Exemplo de Inicialização (com valores):
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

Para acessar um elemento específico de uma matriz, você precisa usar dois índices: um para a linha e outro para a coluna.

Exemplo de Acesso a Elemento:
    int valor = matriz[0][1];  // Acessa o valor na primeira linha, segunda coluna (valor = 2)

Para percorrer todas as posições de uma matriz, você pode usar dois loops for aninhados: o primeiro para percorrer as linhas e o segundo para percorrer as colunas.

Exempolo:
        for (int i = 0; i < 3; i++) {
            // Percorrendo as colunas
            for (int j = 0; j < 3; j++) {
                cout << "Elemento na posicao [" << i << "][" << j << "]: " << matriz[i][j] << endl;
            }
        }
*/

#include <iostream>
using namespace std;

int main(){
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // percorendo as linhas
    for (int i = 0; i < 3; i++){
        // percorrer as colunas
        for(int j = 0; j < 3; j++){
            cout << "Elemento na posição [" << i << "][" << j << "]: " << matriz[i][j] << endl;
        }
    }

    return 0;
}