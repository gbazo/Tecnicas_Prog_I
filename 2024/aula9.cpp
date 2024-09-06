/*
Switch e case em C++

O switch é uma estrutura de controle de fluxo que permite a execução de diferentes blocos de código com base no valor de uma variável. Ele é frequentemente usado como uma alternativa ao uso de várias instruções if-else quando há muitas condições baseadas em uma única variável. O case é utilizado dentro do switch para definir os diferentes caminhos que o código pode seguir dependendo do valor da variável.

Como Funciona

Estrutura Básica:

switch (variável) {
    case valor1:
        // Código a ser executado se variável == valor1
        break;
    case valor2:
        // Código a ser executado se variável == valor2
        break;
    ...
    default:
        // Código a ser executado se nenhum dos casos acima corresponder
        break;
}

    1. Processo de Avaliação:
        ◦ O switch avalia a variável especificada entre parênteses.
        ◦ Compara o valor da variável com cada case dentro do bloco switch.
        ◦ Quando encontra um case cujo valor corresponde ao valor da variável, executa o bloco de código associado a esse case.
        ◦ O break é utilizado para sair do bloco switch após a execução do código do case. Sem o break, a execução continua nos próximos case (chamado de "fall-through").
        ◦ O default é opcional e é executado se nenhum dos valores dos case corresponder ao valor da variável. É similar ao else em uma estrutura if-else.
    2. Regras:
        ◦ O valor das variáveis e dos case deve ser de tipos compatíveis (geralmente inteiros ou enumerados).
        ◦ O case deve ser um valor constante e único.
        ◦ O switch é mais eficiente do que múltiplos if-else quando há muitas condições para verificar.

Utilização
    • Menus: O switch é comumente utilizado para criar menus de opções onde cada opção corresponde a um case.
    • Classificação de Valores: Útil para classificar ou categorizar valores com base em uma variável.
    • Processamento de Comandos: Pode ser usado para processar diferentes comandos ou ações com base em uma escolha do usuário.

Exemplo Menu de Opções

Descrição: Crie um programa que exiba um menu de opções e execute uma ação com base na escolha do usuário. O menu terá opções para exibir uma mensagem, calcular a soma de dois números ou sair do programa.

*/
#include <iostream>

using namespace std;

int main (){
    // declaracao de uma variavel para armazenar as opções do menu
    int opcao;

    cout << "### MENU DE OPCOES ###" << endl;
    cout << "1. Exibir uma mensagem" <<endl;
    cout << "2. Calcular a soma" << endl;
    cout << "3. Sair" << endl;
    cout << "Escolha uma opcao (1-3): ";
    cin >> opcao;

    switch (opcao){
        case 1:
            cout << "\nVoce escolheu exibir uma mensagem!" << endl;
            break;
        case 2:
            int num1, num2;
            cout << "\nInsira o primeiro numero: ";
            cin >> num1;
            cout << "\nInsira o segundo numero: ";
            cin >> num2;
            cout << "A soma é: " << (num1 + num2) << endl;
            break;
        case 3:
            cout << "\nSaindo.... tchau";
            break;
        default:
            cout << "\nOpcao invalida!" << endl;
            break;
    }

    return 0;
}
