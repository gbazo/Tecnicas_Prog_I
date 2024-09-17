/*
Exemplo 2: Soma de Números versão DO-WHILE

O programa pede ao usuário para inserir números positivos e calcula a soma de todos esses números. O loop continua até que o usuário insira um número negativo, momento em que o programa exibe a soma total dos números positivos inseridos.

Explicação do Código Convertido
    1. Início do do-while:
        ◦ O bloco de código dentro do do é executado ao menos uma vez, independentemente do valor inicial de numero.
    2. Entrada do Usuário:
        ◦ cin >> numero; lê o número inserido pelo usuário.
        ◦ if (numero >= 0) verifica se o número é positivo. Se for, ele é adicionado à soma e a soma é atualizada.
    3. Exibição de Resultados:
        ◦ Após a entrada e a verificação, o programa exibe o número inserido e o valor atual da soma.
    4. Condição do do-while:
        ◦ while (numero >= 0); verifica a condição após a execução do bloco de código. Se o número for positivo, o loop continua. Se o número for negativo, o loop termina e o programa exibe a soma total.
    5. Saída Final:
        ◦ Após sair do loop, o programa imprime a soma total dos números positivos inseridos.

*/

#include <iostream>

using namespace std;

int main(){
    int numero = 0; // var para armazenar o num inserido pelo user
    int soma = 0; // var para armazenar a soma dos num positivos

    cout << "Digite numeros positivos para somar (digite um numero negativo para encerrar): " << endl;

    do {
        cin >> numero; // le o numero inserido pelo user
        if (numero >= 0){
            soma += numero;
            cout << "Você inseriu: " << numero << endl;
            cout << "nesta iteração o valor da soma é: " << soma << endl;
        }
    } while (numero >= 0); // continua executando eenquanto o numero inserido for positivo

    cout << "A soma dos numeros positivos é: " << soma << endl;

    return 0;
}
