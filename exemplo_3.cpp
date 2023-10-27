// Situação-Problema:

// Imagine uma escola onde os alunos têm que registrar suas notas para cada disciplina em um sistema. Vamos criar uma classe Aluno e uma classe Disciplina para gerenciar essas informações.

// 1 - A classe Aluno deve ter um nome, matrícula e uma lista de disciplinas.
// 2 - A classe Disciplina deve ter um nome e uma nota.
// Utilizaremos novos conceitos de destrutores, Método de Acesso (Getter), Método de Modificação (Setter) e Métodos Estaticos

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Disciplina {
private:
    string nome;
    float nota;

public:
    // Construtor
    Disciplina(string n, float no) : nome(n), nota(no) {}

    // Método de Acesso (Getter) para o nome da disciplina
    string getNome() const {
        return nome;
    }

    // Método de Acesso (Getter) para a nota da disciplina
    float getNota() const {
        return nota;
    }

    // Método de Modificação (Setter) para alterar a nota da disciplina
    void setNota(float no) {
        if(no >= 0.0 && no <= 10.0) {
            nota = no;
        } else {
            cout << "Nota inválida!" << endl;
        }
    }
};

class Aluno {
private:
    string nome;
    int matricula;
    vector<Disciplina> disciplinas;  // Vetor para armazenar as disciplinas do aluno
    static int contadorAlunos;      // Variável estática para contar alunos

public:
    // Construtor
    Aluno(string n, int mat) : nome(n), matricula(mat) {
        contadorAlunos++;           // Incrementa o contador sempre que um aluno é criado
    }

    // Destrutor
    ~Aluno() {
        contadorAlunos--;           // Decrementa o contador sempre que um aluno é destruído
    }

    // Método de Acesso (Getter)
    string getNome() const {
        return nome;
    }

    int getMatricula() const {
        return matricula;
    }

    // Método de Modificação (Setter) para o nome
    void setNome(string n) {
        nome = n;
    }

    // Adiciona uma disciplina ao vetor de disciplinas
    void adicionarDisciplina(Disciplina d) {
        disciplinas.push_back(d);   // push_back() é usado para adicionar um elemento ao final do vetor
    }

    // Exibe notas do aluno
    void exibirNotas() const {
        cout << "Notas do aluno " << nome << " (Matrícula: " << matricula << "):" << endl;
        for (const Disciplina& d : disciplinas) {
            cout << d.getNome() << ": " << d.getNota() << endl;
        }
    }

    // Retorna o valor atual do contador de alunos, o método estatico assim como a variavel permite realizar sua chamada independente da criação de um objeto da classe, chamando diretamente a classe (NomeDaClasse::getContadorAlunos()), neste exemplo então podemos verificar a quantidade de alunos sem instanciar a classe
    static int getContadorAlunos() {
        return contadorAlunos;
    }
};

// Inicializando a variável estática contadorAlunos fora da classe
int Aluno::contadorAlunos = 0;

int main() {
    cout << "Total de alunos: " << Aluno::getContadorAlunos() << endl;

    string nome;
    int matricula;
    int numDisciplinas;
    string nomeDisciplina;
    float notaDisciplina;

    // Primeiro aluno
    cout << "Digite o nome do primeiro aluno: ";
    getline(cin, nome);

    cout << "Digite a matrícula do primeiro aluno: ";
    cin >> matricula;
    cin.ignore();  // Limpa o buffer

    Aluno aluno1(nome, matricula);

    cout << "Quantas disciplinas esse aluno tem? ";
    cin >> numDisciplinas;
    cin.ignore();  // Limpa o buffer

    for (int i = 0; i < numDisciplinas; i++) {
        cout << "Digite o nome da disciplina " << i + 1 << ": ";
        getline(cin, nomeDisciplina);
        
        cout << "Digite a nota de " << nomeDisciplina << ": ";
        cin >> notaDisciplina;
        cin.ignore();  // Limpa o buffer
        
        aluno1.adicionarDisciplina(Disciplina(nomeDisciplina, notaDisciplina));
    }

    cout << "\nTotal de alunos após criar o primeiro: " << Aluno::getContadorAlunos() << endl;

    // Segundo aluno
    cout << "\nDigite o nome do segundo aluno: ";
    getline(cin, nome);

    cout << "Digite a matrícula do segundo aluno: ";
    cin >> matricula;
    cin.ignore();  // Limpa o buffer

    Aluno aluno2(nome, matricula);

    cout << "Quantas disciplinas esse aluno tem? ";
    cin >> numDisciplinas;
    cin.ignore();  // Limpa o buffer

    for (int i = 0; i < numDisciplinas; i++) {
        cout << "Digite o nome da disciplina " << i + 1 << ": ";
        getline(cin, nomeDisciplina);
        
        cout << "Digite a nota de " << nomeDisciplina << ": ";
        cin >> notaDisciplina;
        cin.ignore();  // Limpa o buffer
        
        aluno2.adicionarDisciplina(Disciplina(nomeDisciplina, notaDisciplina));
    }

    cout << "\nTotal de alunos após criar o segundo: " << Aluno::getContadorAlunos() << endl;

    // Exibindo notas dos alunos
    cout << "\nNotas dos alunos:" << endl;
    aluno1.exibirNotas();
    cout << endl;
    aluno2.exibirNotas();

    return 0;
}