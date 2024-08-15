/*
    Exercício: escreva um programa em C++ que armazene e imprima as seguintes informações de um usuario:
        - nome
        - telefone
        - data de nascimento
        - endereço
        - cidade
*/

#include <iostream>
#include <string>

using namespace std;

int main (){
    //declaração das variaveis
    string nome, endereco, cidade, telefone;
    int dia, mes, ano;

    cout << " *** CADASTRO *** ";

    cout << "\nInsira as informacoes conforme solicitado" << endl;

    cout << "Nome: ";
    getline(cin, nome);

    cout << "Telefone: ";
    getline(cin, telefone);

    cout << "\nData de nascimento" << endl;
    cout << "DIA: ";
    cin >> dia;
    cout << "MES: ";
    cin >> mes;
    cout << "ANO: ";
    cin >> ano;

    cout << "\nEndereco: ";
    cin.ignore();
    getline(cin, endereco);

    cout << "Cidade: ";
    getline(cin, cidade);

    cout << "\n *** INFORMACOES CADASTRADAS *** " << endl;

    cout << nome << endl;
    cout << telefone << endl;
    cout << dia << " / " << mes << " / " << ano << endl;
    cout << endereco << endl;
    cout <<  cidade << endl;

    return 0;
}