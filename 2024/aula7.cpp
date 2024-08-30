/*
IF ANINHADO

Um "if aninhado" em C++ (ou em outras linguagens de programação) é uma estrutura condicional onde um bloco de código if contém outro bloco de código if. Em outras palavras, um if é colocado dentro de outro if. Esse tipo de estrutura é usado quando você precisa realizar verificações múltiplas e INDEPENDENTES.

Estrutura Básica de um if Aninhado

Aqui está a estrutura básica de um if aninhado:

if (condição1) {
    // Código executado se condição1 for verdadeira
    if (condição2) {
        // Código executado se condição1 e condição2 forem verdadeiras
    } else {
        // Código executado se condição1 for verdadeira e condição2 for falsa
    }
} else {
    // Código executado se condição1 for falsa
}

RELEMBRANDO IF - ELSE IF          z                                                 

if (condição1) {
    // Bloco de código executado se condição1 for verdadeira
} else if (condição2) {
    // Bloco de código executado se condição1 for falsa e condição2 for verdadeira
} else {
    // Bloco de código executado se as condições 1 e 2 forem falsas
}

EXEMPLO

Vamos considerar um exemplo onde você precisa verificar a idade de uma pessoa e se ela é um estudante ou não

Explicação do Exemplo
    1. Entrada de Dados:
        ◦ O programa solicita ao usuário que insira sua idade e se é estudante ou não.
    2. Primeiro if:
        ◦ if (idade < 18): Verifica se a idade é menor que 18.
            ▪ Se verdadeiro, entra no bloco if e imprime que a pessoa é menor de idade.
            ▪ Dentro deste bloco, há outro if que verifica se a pessoa é estudante.
                • Se a pessoa é estudante, imprime que é um estudante menor de idade.
                • Caso contrário, imprime que é um não-estudante menor de idade.
    3. Bloco else do Primeiro if:
        ◦ Se a idade não for menor que 18, o código entra no bloco else, que imprime que a pessoa é maior de idade.
        ◦ Dentro deste bloco, há outro if que verifica se a pessoa é estudante.
            ▪ Se a pessoa é estudante, imprime que é um estudante maior de idade.
            ▪ Caso contrário, imprime que é um não-estudante maior de idade.
Usos de if Aninhado
    • Verificações Condicionais Complexas: Quando você precisa realizar verificações múltiplas que dependem uma da outra.
    • Processamento de Dados Dependentes: Quando a segunda condição precisa ser verificada somente se a primeira condição for satisfeita.

*/

#include <iostream>

using namespace std;

int main () {
    // declaração das variaveis
    int idade;
    bool estudante;

    cout << " ### IDENTIFICADOR DE PESSOAS ###" << endl;

    cout << "\nDigite sua idade: ";
    cin >> idade;

    cout << "Você é um estudante (1 para sim, 0 para não): ";
    cin >> estudante;

    if (idade < 18){
        cout << "Você é menor de idade." << endl;
        if (estudante){
            cout << "Você é um estudante menor de idade." << endl;
        } else {
            cout << "Você não esta estudando e é menor de idade." << endl;
        }
    } else {
        cout << "Você é maior de idade." << endl;
        if (estudante) {
            cout << "Você é um estudante maior de idade." << endl; 
        } else {
            cout << "Você é maior de idade e não estuda!" << endl;
        }
    }

    return 0;
}