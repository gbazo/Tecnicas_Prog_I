/*
LAÇO FOR

O laço for é uma estrutura de controle de fluxo em C++ que permite a repetição de um bloco de código um número específico de vezes. É especialmente útil quando você sabe de antemão quantas iterações deseja realizar. O for combina a inicialização de uma variável, a condição de continuação e a atualização da variável em uma única linha, tornando-o uma escolha concisa e eficiente para iterações.

Sintaxe do for

for (inicialização; condição; atualização) {
    // Bloco de código a ser executado
}


•	Inicialização: É executada uma vez antes do início do loop e geralmente é usada para declarar e inicializar uma variável de controle.
•	Condição: É verificada antes de cada iteração. Se for verdadeira, o bloco de código é executado; caso contrário, o loop termina.
•	Atualização: É executada após cada iteração, geralmente usada para incrementar ou modificar a variável de controle.

Diferença entre for e while
•	Estrutura: O for é mais compacto, pois combina inicialização, condição e atualização em uma única linha. O while, por outro lado, requer a inicialização antes do loop e a atualização dentro do bloco de código.
•	Uso: O for é mais adequado quando o número de iterações é conhecido ou pode ser determinado. O while é mais flexível para situações em que a condição de continuação depende de fatores que não são facilmente contados.

Exemplo 1 - Contagem Simple

Vamos contar e imprimir do numero 1 ao 5
*/

#include <iostream>

using namespace std;

int main() {

    for (int i = 1; i <= 5; i++){
        cout << "Número: " << i << endl;
    }

    return 0;
}