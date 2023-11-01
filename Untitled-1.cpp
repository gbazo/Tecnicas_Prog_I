// 1. Uso Básico de Structs: Armazenando e Acessando Informações de um Livro
// Problema: Crie um programa que defina uma struct para armazenar informações sobre um livro, como título, autor e ano de publicação. O usuário deve inserir essas informações e, em seguida, o programa deve imprimi-las.

/*  bibliotecas 
    iostream
    string

    struct livro{
        string titulo;
        string autor;
        int ano;
    };

    função principal(){
        livro meulivro1;

        escreva("Digite o nome do livro: ")
        leia(meulivro1.titulo)
        .
        escreva("Titulo: ", meulivro1.titulo)
        .
    return 0;
    }


*/

#include <iostream>
#include <string>

using namespace std;

struct livro{
    string titulo, autor;
    int ano;
};

int main(){
    livro meulivro1;

    cout << "Digite o titulo do livro: " << endl;
    getline(cin, meulivro1.titulo);
    cout << "Digite o autor do livro: " << endl;
    getline(cin, meulivro1.autor);
    cout << "Digite o ano do livro: " << endl;
    cin >> meulivro1.ano;

    cout << "------ Infos do Livro ------" << endl;
    cout << "Titulo: " << meulivro1.titulo << endl;
    cout << "Autor: " << meulivro1.autor << endl;
    cout << "Ano: " << meulivro1.ano << endl;
    
    return 0;
}
