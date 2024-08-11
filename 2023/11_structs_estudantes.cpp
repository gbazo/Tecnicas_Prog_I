// 2. Uso Avançado de Structs: Armazenando e Filtrando Informações de Vários Estudantes
// Problema: Crie um programa que use uma struct para armazenar informações sobre estudantes, como nome, número de matrícula e nota final. Permita ao usuário inserir informações de 5 estudantes. 
// Após a inserção, o programa deve imprimir os nomes dos estudantes que possuem nota final maior que 7.

#include <iostream>
#include <string>

struct Estudante {
    std::string nome;
    std::string matricula;
    double notaFinal;
};

int main() {
    const int NUM_ESTUDANTES = 5;
    Estudante estudantes[NUM_ESTUDANTES];

    for (int i = 0; i < NUM_ESTUDANTES; i++) {
        std::cin.ignore();  // Limpa o buffer
        std::cout << "Digite o nome do estudante " << i + 1 << ": ";
        std::getline(std::cin, estudantes[i].nome);

        std::cout << "Digite a matrícula do estudante " << i + 1 << ": ";
        std::getline(std::cin, estudantes[i].matricula);

        std::cout << "Digite a nota final do estudante " << i + 1 << ": ";
        std::cin >> estudantes[i].notaFinal;
    }

    std::cout << "\nEstudantes com nota maior que 7:" << std::endl;
    for (int i = 0; i < NUM_ESTUDANTES; i++) {
        if (estudantes[i].notaFinal > 7) {
            std::cout << estudantes[i].nome << std::endl;
        }
    }

    return 0;
}
