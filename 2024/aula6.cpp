/*
Uso de ELSE IF

Definição: O else if é usado para criar uma cadeia de condições alternativas. Se a condição inicial do if não for satisfeita, o programa verifica a condição especificada pelo else if.

if (condição1) {
    // Bloco de código executado se condição1 for verdadeira
} else if (condição2) {
    // Bloco de código executado se condição1 for falsa e condição2 for verdadeira
} else if (condição3) {
    // Bloco de código executado se condição1 e condição2 forem falsas e condição3 for verdadeira
} else {
    // Bloco de código executado se nenhuma das condições anteriores for verdadeira
}

EXEMPLO

Compara dois números e exibe o maior ou informa se são iguais

1. Declaração de Variáveis: duas variáveis do tipo int (inteiro) para armazenar os números que o usuário irá inserir.

2. Entrada de Dados: solicita ao usuário que insira dois números inteiros. cout: Exibe mensagens para o usuário no console. cin: Lê os valores inseridos pelo usuário e armazena nas variáveis numero1 e numero2.

3. Estrutura Condicional if-else: Compara os dois números e exibe o maior número ou informa se eles são iguais. if: Verifica se numero1 é maior que numero2. Se verdadeiro, exibe numero1 como o maior número. else if: Se a primeira condição não for verdadeira, verifica se numero2 é maior que numero1. Se verdadeiro, exibe numero2 como o maior número.
else: Se nenhuma das condições anteriores for verdadeira (o que significa que numero1 é igual a numero2), exibe a mensagem informando que os números são iguais. endl: Adiciona uma nova linha no final da saída, garantindo que a próxima saída comece em uma nova linha.

*/

#include <iostream>

using namespace std;

int main(){
    // declaração das variaveis
    int numero1, numero2;

    // entrada das informações
    cout << "Digite o primeiro numero: ";
    cin >> numero1;

    cout << "Digite o segundo numero: ";
    cin >> numero2;

    // verificações IF - ELSE IF - ELSE
    if (numero1 > numero2){
        cout << "\nO maior numero é o: " << numero1 << endl;
    } else if (numero2 > numero1){
        cout << "\nO maior numero é o: " << numero2 << endl;
    } else {
        cout << "\nOs dois numero são iguais." << endl;
    }

    return 0;
}