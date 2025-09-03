/*
Função Simples sem Parâmetros

Esse exemplo apresenta uma função chamada exibirMensagem que exibe uma mensagem simples. A função é do tipo void, pois não retorna nenhum valor.

*/

#include <iostream>
using namespace std;

void exibirMensagem(){
    cout << "Mensagem gerada dentro da função void" << endl;
}

int main(){

    exibirMensagem();

    cout << "\nMensagem gerada dentro da função principal" << endl;
    
    return 0;
}