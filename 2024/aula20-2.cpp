/*
Operador Ternário Aninhado

É possivel aninhar operadores ternários para tomar várias decisões em sequência, veja o exemplo a seguir.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    float nota;

    cout << "Insira a nota do aluno: ";
    cin >> nota;

    // usando operador ternário aninhado para avaliar a nota
    string resultado = (nota >= 9) ? " Excelente" :
                        (nota >= 8) ? " Bom" :
                        (nota >= 7) ? " OK" :
                        (nota >= 6) ? " Na risca" : " Ferro";
    
    cout << "Nota inserida: " << nota << resultado << endl;

    return 0;
}
