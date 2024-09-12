/*
Estruturas de repetição

Uma estrutura de repetição, também conhecida como laço ou loop, é uma construção fundamental em programação que permite executar um bloco de código várias vezes de forma repetitiva. Essas estruturas são úteis para automatizar tarefas que precisam ser realizadas repetidamente, economizando tempo e esforço do programador.

Principais Características das Estruturas de Repetição:
    - Execução Repetitiva: Permite que um bloco de código seja executado várias vezes sem a necessidade de duplicar o mesmo código.
    - Controle de Iterações: Utiliza uma condição ou um contador para determinar quando o loop deve iniciar, continuar ou terminar.
    - Flexibilidade: Pode ser configurado para executar um número fixo de vezes ou até que uma condição específica seja atendida.

### WHILE

O laço while é uma estrutura de controle de fluxo usada para repetir um bloco de código enquanto uma condição especificada for verdadeira. É um dos tipos de laços de repetição em C++ e é útil quando você não sabe quantas vezes precisa repetir o bloco de código antes de começar o loop.

while (condição) {
    // Bloco de código a ser executado
}

• Condição: Uma expressão que é avaliada como verdadeira ou falsa. Enquanto a condição for verdadeira (true), o bloco de código dentro do while será executado repetidamente.
• Bloco de código: O conjunto de instruções que serão executadas em cada iteração do loop.

Características do while
    1. Avaliação da Condição: A condição é verificada antes de cada iteração do loop. Se a condição for falsa (false) na primeira verificação, o bloco de código pode não ser executado nenhuma vez.
    2. Loops Infinitos: Se a condição nunca se torna falsa, o laço while continuará executando indefinidamente, o que pode levar a um loop infinito.
    3. Incremento/Decremento: É importante modificar a variável usada na condição dentro do bloco de código para garantir que o laço termine eventualmente.

EXEMPLO:

Contador Simples
Este exemplo demonstra um laço while que conta de 0 a 10 e exibe o valor no console.
*/

#include <iostream>

using namespace std;

int main() {
    int contador = 0; // variavel para condição e saida

    cout << "### IMPRESSAO COM WHILE ###" << endl;

    while (contador <= 10){ // condição enquanto o contador é < 10
        cout << "O contador é: " << contador << endl;
        contador++; // incremento do contador
    }

    return 0;
}