/*
DO-WHILE

O laço do-while é uma estrutura de repetição que garante que o bloco de código seja executado pelo menos uma vez antes de verificar a condição para possíveis iterações adicionais. Isso é útil quando você precisa que o código execute ao menos uma vez, independentemente da condição inicial.

Sintaxe do do-while

do {
    // Bloco de código a ser executado
} while (condição);

• Bloco de código: O conjunto de instruções que será executado pelo menos uma vez e repetidamente enquanto a condição for verdadeira.
• Condição: Uma expressão que é avaliada como verdadeira ou falsa após a execução do bloco de código. Se for verdadeira, o bloco de código será executado novamente. Se for falsa, o loop terminará.

Características do do-while

    1. Execução Garantida: O bloco de código dentro do do-while é sempre executado pelo menos uma vez, independentemente da condição.
    2. Verificação Após a Execução: A condição é verificada depois da execução do bloco de código. Portanto, a execução do código ocorre antes da verificação da condição.
    3. Adequado para Repetições Dependentes da Execução Inicial: É ideal quando você deseja garantir que a ação seja realizada ao menos uma vez e depois repetir com base na condição.

Exemplos de do-while

Exemplo 1: Menu de Opções

Este exemplo mostra como usar do-while para exibir um menu de opções e solicitar ao usuário que escolha uma opção até que ele selecione a opção de sair.
*/

#include <iostream>

using namespace std;

int main () {
    int opcao;

    do {
        cout << "### MENU DE OPCOES ###" << endl;
        cout << "1. Opção 1" << endl;
        cout << "2. Opção 2" << endl;
        cout << "3. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch(opcao){
            case 1:
                cout << "Você escolheu a opcao 1." << endl;
                break;
            case 2:
                cout << "Você escolheu a opcao 2." << endl;
                break;
            case 3:
                cout << "Saindo...." << endl;
                break;
            default:
                cout << "Opção invalida. Tente novamente!" << endl;
                break;
        }
    } while (opcao != 3); // continua executando o menu até que a opção 3 sair seja escolhida

    return 0;
}