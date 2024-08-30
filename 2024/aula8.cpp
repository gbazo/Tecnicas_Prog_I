/*
IF aninhado com operador OR

Enunciado: Escreva um programa que classifica a nota de um aluno em diferentes categorias com base em sua média final. O programa deve pedir a nota final do aluno e, se a nota estiver entre 0 e 10, classificar como "Reprovado" (abaixo de 5), "Aprovado" (de 5 a 7, inclusive), "Aprovado com Louvor" (acima de 7). Se a nota estiver fora do intervalo, exiba uma mensagem de erro.

• Objetivo: Classificar a nota do aluno em categorias de aprovação.
• Uso de if Aninhado: Permite uma verificação detalhada onde uma condição inicial é verificada e, se for verdadeira, uma segunda verificação é realizada para determinar a classificação final. Isso é útil quando a categorização depende de múltiplas verificações sequenciais.
• Classificação da nota: A primeira verificação é se a nota está dentro do intervalo válido. Se estiver, a nota é classificada usando uma série de verificações if aninhadas.

*/

#include <iostream>

using namespace std;

int main(){
    float nota;

    cout << "Digite a nota final do aluno (0 e 10): ";
    cin >> nota;

    if (nota < 0 || nota > 10){
        cout << "Nota invalida, execute novamente e insira uma nota entre 0 a 10" << endl;
    } else {
        if (nota < 5) {
            cout << "Reprovado" << endl;
        } else {
            if (nota <= 7){
                cout << "Aprovado" << endl;
            } else {
                cout << "Aprovado com louvor" << endl;
            }
        }
    }

    return 0;
}

