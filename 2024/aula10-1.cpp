/*
Exemplo 2: Soma de Números

O programa pede ao usuário para inserir números positivos e calcula a soma de todos esses números. O loop continua até que o usuário insira um número negativo, momento em que o programa exibe a soma total dos números positivos inseridos.

Explicação
    1. Variáveis:
        ◦ numero: Armazena o número inserido pelo usuário.
        ◦ soma: Armazena a soma dos números positivos.
    2. Entrada do Usuário:
        ◦ O programa pede ao usuário para inserir números e continua pedindo até que um número negativo seja inserido.
    3. Loop while:
        ◦ O laço while continua executando enquanto a condição numero >= 0 for verdadeira. Isso significa que o programa continuará a solicitar números até que o usuário insira um número negativo.
        ◦ Dentro do laço, o número inserido é lido e verificado. Se for positivo, ele é adicionado à variável soma.
    4. Saída:
        ◦ Quando o usuário insere um número negativo, o laço termina e o programa exibe a soma total dos números positivos inseridos.
    5. Importância do Controle de Fluxo:
        ◦ A verificação dentro do laço (if (numero >= 0)) é crucial para garantir que apenas números positivos sejam somados, evitando que um número negativo seja incluído na soma.

*/

#include <iostream>

using namespace std;

int main (){
    int numero = 0; // variavel para armazenar o num inserido pelo user
    int soma = 0; // var para armazenar a soma dos num positivos

    cout << "Digite numeros positivos para somar (digite um numero negativo para encerrar): " << endl;

    while (numero >= 0){ // laço que continua executando enquanto o numero inserido for positivo
        cin >> numero;
        cout << "Você inseriu: " << numero << endl;
        if (numero >= 0){
            soma += numero;
            cout << "Nesta iteração o valor da soma é: " << soma << endl;
        }
    }

    cout << "A soma dos numeros positivos é: " << soma << endl;

    return 0;
}