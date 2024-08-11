// Calculadora simples
// Problema: Escreva um programa que permite ao usuário escolher uma operação aritmética básica (adição, subtração, multiplicação ou divisão) e, em seguida, solicite dois números para realizar a operação escolhida. O programa deve exibir o resultado da operação.

//biblioteca
//função principal(){
//    caracter operacao
//    double num1, num2
//
//    escreva("Escolha uma operacao (+, -, *, /): ")
//    leia(operacao)
//    escreva("Digite o primeiro numero: ")
//    leia(num1)
//    escreva("Digite o segundo numero:")
//    leia(num2)  
//
//    escolha(operacao)
//        caso '+':
//          escreva("Resultado: ", num1 + num2)
//          pare
//        caso '-':
//          escreva("Resultado: ", num1 - num2)
//          pare
//        caso '*':
//          escreva("Resultado: ", num1 * num2)
//          pare
//        caso '/':
//          se (num2 != 0)
//              escreva("Resultado: ", num1 / num2)
//          senão
//              escreva("Erro, divisao invalida!")
//          pare
//        caso contrario:
//              escreva("Opcao invalida")
//
//      retorna 0
//}

#include <iostream>

using namespace std;

int main(){
    char operacao;
    double num1, num2;

    cout << "Escolha a operacao (+, -, *, /)";
    cin >> operacao;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    switch(operacao){
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0){
                cout << "Resultado: " << num1 / num2 << endl;
            } else {
                cout << "Erro, operacao invalida!!";
            }
            break;
        default:
            cout << "Erro, opcao invalida!!";
    }    

    return 0;
}
