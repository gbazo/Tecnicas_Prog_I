/*
Classificador de Idades

Situação-problema:
Desenvolva um programa em C++ que peça ao usuário para digitar a sua idade e, em seguida, classifique o usuário em uma das seguintes categorias:

Criança: até 12 anos.
Adolescente: de 13 a 18 anos.
Adulto: de 19 a 59 anos.
Idoso: 60 anos ou mais.   

Objetivos:
Praticar a declaração de variáveis e a entrada/saída de dados.
Aplicar estruturas condicionais (if-else) para tomar decisões com base nos dados de entrada.
*/

#include <iostream>

using namespace std;

int main(){
    // declaração das variaveis
    int idade;

    cout << " ### CLASSIFICADOR DE IDADES ### " << endl;

    cout << "\n Insira sua idade: ";
    cin >> idade;

    if (idade <= 12){
        cout << "\nVocê é uma criança!" << endl;
    } else if (idade > 12 and idade <= 18) {
        cout << "\nVocê é um adolescente!" << endl;
    } else if (idade > 18 and idade <= 59) {
        cout << "\nVocê é um adulto!" << endl;
    } else {
        cout << "\nVocê é um idoso!" << endl;
    }

    return 0;
}