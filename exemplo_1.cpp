// Situação Problema:

// Vamos criar um sistema simples de gerenciamento de livros para uma biblioteca. Neste sistema, cada livro possui um título, um autor e um código ISBN. Queremos ser capazes de:

// Criar um livro.
// Exibir informações do livro.
// Para isso, usaremos uma classe chamada Livro que terá:

// Atributos: titulo, autor e ISBN.
// Um construtor para inicializar os atributos.
// Uma função para exibir as informações do livro.


#include <iostream>
#include <string>

using namespace std;

// Classe Livro
class Livro {
private:
    string titulo;
    string autor;
    string ISBN;

public:
    // Construtor
    Livro(string t, string a, string i) : titulo(t), autor(a), ISBN(i) {}

    // Função para exibir informações do livro
    void exibirInfo() {
        cout << "Título: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "ISBN: " << ISBN << endl;
    }
};

int main() {
    string titulo, autor, ISBN;

    // Solicita ao usuário para inserir informações do livro
    cout << "Insira o título do livro: ";
    getline(cin, titulo);

    cout << "Insira o autor do livro: ";
    getline(cin, autor);

    cout << "Insira o ISBN do livro: ";
    getline(cin, ISBN);

    // Criando um livro com as informações inseridas
    Livro meuLivro(titulo, autor, ISBN);

    // Exibindo informações do livro
    meuLivro.exibirInfo();

    return 0;
}
