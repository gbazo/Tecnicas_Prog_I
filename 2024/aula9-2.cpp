/*
Classificação de Nota

Descrição: Crie um programa que receba uma nota de 0 a 10 e classifique a nota em diferentes categorias (Aprovado com louvor, Aprovado, Recuperação, Reprovado) usando switch e case.

Explicação:
    • O switch é usado para classificar a nota em diferentes categorias.
    • Os casos são agrupados para uma classificação mais ampla, por exemplo, notas 10, 9 e 8 são todas consideradas como "Aprovado com distinção".
    • O default lida com valores de nota que não estão no intervalo permitido.

*/

#include <iostream>

using namespace std;

int main (){
    int nota;

    cout << "Digite a nota do aluno (0-10): ";
    cin >> nota;

    switch (nota){
        case 10:
        case 9:
        case 8:
            cout << "Aprovado com louvor!" << endl;
            break;
        case 7:
            cout << "Aprovado!" << endl;
            break;
        case 6:
            cout << "Recuperação!" << endl;
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            cout << "Reprovado!" << endl;
            break;
        default:
            cout << "Nota invalida!" << endl;
            break;
    }
    return 0;
}