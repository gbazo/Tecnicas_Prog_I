/*
IF multiplas condições com operador OR

Enunciado: Escreva um programa que classifica a temperatura atual em quatro categorias: "Muito Frio" (abaixo de 0°C), "Frio" (de 0°C a 15°C, inclusive), "Agradável" (de 16°C a 25°C, inclusive), e "Quente" (acima de 25°C). Se a temperatura estiver fora do intervalo de -50°C a 60°C, exiba uma mensagem de erro.

• Objetivo: Classificar a temperatura em categorias específicas.
• Uso de if-else if: Permite a verificação de múltiplas condições em uma sequência ordenada. Se uma condição for verdadeira, a execução do código correspondente ocorre, e as condições seguintes são ignoradas.
• Verificação de intervalo: Se a temperatura estiver fora dos limites especificados, exibe uma mensagem de erro. Caso contrário, verifica a faixa de temperatura e exibe a classificação adequada.

*/

#include <iostream>

using namespace std;

int main() {
    float temperatura;

    cout << "Digite a temperatura em graus celsius: ";
    cin >> temperatura;

    if (temperatura < -50 || temperatura > 60){
        cout << "Temperatura invalida, insira entre -50 e 60" << endl;
    } else if (temperatura < 0) {
        cout << "Muito frio." << endl;
    } else if (temperatura <= 15) {
        cout << "Frio." << endl;
    } else if (temperatura <= 25) {
        cout << "Agradavel." << endl;
    } else {
        cout << "Quente." << endl;
    }

    return 0;
}