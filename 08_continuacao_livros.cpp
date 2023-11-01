// Situação Problema:

// Suponha que, em adição ao sistema de gerenciamento de livros, agora desejamos também gerenciar autores. Cada autor terá:

// Nome.
// Nacionalidade.
// Ano de nascimento.
// Além disso, cada livro deve ter uma referência ao seu autor. Queremos ser capazes de:

// Criar um autor.
// Criar um livro com referência ao seu autor.
// Exibir informações do livro e do autor.

#include <iostream>
#include <string>

using namespace std;

// Classe Autor
class Autor {
private:
    string nome;
    string nacionalidade;
    int anoNascimento;

public:
    // Construtor
    Autor(string n, string na, int ano) : nome(n), nacionalidade(na), anoNascimento(ano) {}

    // Destrutor
    ~Autor() {
        cout << "Destrutor do Autor chamado!" << endl;
    }

    // Métodos de acesso (getters)
    string getNome() const {
        return nome;
    }

    string getNacionalidade() const {
        return nacionalidade;
    }

    int getAnoNascimento() const {
        return anoNascimento;
    }

    // Métodos de modificação (setters)
    void setNome(string n) {
        nome = n;
    }

    void setNacionalidade(string na) {
        nacionalidade = na;
    }

    void setAnoNascimento(int ano) {
        anoNascimento = ano;
    }
};

// Classe Livro
class Livro {
private:
    string titulo;
    string ISBN;
    const Autor& autor;

public:
    // Construtor
    Livro(string t, string i, const Autor& a) : titulo(t), ISBN(i), autor(a) {}

    // Destrutor
    ~Livro() {
        cout << "Destrutor do Livro chamado!" << endl;
    }

    // Função para exibir informações do livro e do autor
    void exibirInfo() const {
        cout << "Título: " << titulo << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Autor: " << autor.getNome() << endl;
        cout << "Nacionalidade: " << autor.getNacionalidade() << endl;
        cout << "Ano de Nascimento: " << autor.getAnoNascimento() << endl;
    }
};

int main() {
    // Informações do Autor
    string nome, nacionalidade;
    int anoNascimento;

    cout << "Insira o nome do autor: ";
    getline(cin, nome);

    cout << "Insira a nacionalidade do autor: ";
    getline(cin, nacionalidade);

    cout << "Insira o ano de nascimento do autor: ";
    cin >> anoNascimento;
    cin.ignore(); // Limpar o buffer após a leitura de um int

    // Criando um autor com as informações inseridas
    Autor autor(nome, nacionalidade, anoNascimento);

    // Informações do Livro
    string titulo, ISBN;

    cout << "Insira o título do livro: ";
    getline(cin, titulo);

    cout << "Insira o ISBN do livro: ";
    getline(cin, ISBN);

    // Criando um livro com referência ao autor inserido
    Livro meuLivro(titulo, ISBN, autor);

    // Exibindo informações do livro e do autor
    meuLivro.exibirInfo();

    return 0;
}
