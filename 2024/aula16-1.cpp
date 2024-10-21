/*
Pesquisa em Vetores (Busca Linear com string)

Vamos criar um programa que realize uma busca linear em vetores de string para procurar por um nome específico.

Explicação:
1.	Vetor de string: O vetor nomes[] armazena 5 nomes fixos.
2.	Entrada do usuário: O programa solicita ao usuário que insira um nome (nomeProcurado) para procurar no vetor.
3.	Busca Linear: Um loop for percorre o vetor e compara cada nome com o nome fornecido pelo usuário. Se o nome for encontrado, o programa define a variável encontrado como true, exibe uma mensagem indicando a posição e sai do loop com break.
4.	Verificação: Se o nome não for encontrado após o loop, uma mensagem de "não encontrado" é exibida.

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string nomes[5] = {"Ana", "Carlos", "Beatriz", "Joao", "Mariana"}; // vetor de nomes
    string nomeProcurado;
    bool encontrado = false;

    // solicita ao usuario um nome para procurar
    cout << "Digite um nome para procurar: ";
    cin >> nomeProcurado;

    // busca linear pelo nome no vetor
    for(int i = 0; i < 5; i++){
        if(nomes[i] == nomeProcurado){
            encontrado = true;
            cout << "Nome " << nomeProcurado << " encontrado na posição " << i + 1 << endl;
            break; // sai do loop se o nome for encontrado
        }
    }

    // se o nome nao for encontrado
    if (!encontrado){
        cout << "Nome " << nomeProcurado << " nao encontrado " << endl;
    }

    return 0;
}