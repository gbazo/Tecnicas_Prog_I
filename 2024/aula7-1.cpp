/*
EXEMPLO 2

Esse exemplo é uma continuação do anterior, demonstra o uso de if-else aninhados para categorizar e classificar informações com base em múltiplos critérios, oferecendo uma visão mais detalhada e segmentada das entradas do usuário.

Explicação

Declaração de Variáveis:
    idade: Armazena a idade do usuário.
    estudante: Armazena um valor booleano indicando se o usuário é estudante ou não.
    salario: Armazena o salário do usuário.

Entrada de Dados:
    O programa solicita ao usuário que insira sua idade, se é estudante e seu salário.

Estrutura if-else Aninhada:
    Primeiro Nível:
        O programa verifica se o usuário é menor de idade (idade < 18).
        Se for menor de idade:
            Verifica se é estudante (estudante).
            Exibe a mensagem apropriada com base na combinação de idade e status de estudante.
        Se não for menor de idade (ou seja, é maior de idade):
            Verifica se é estudante (estudante).
    Segundo Nível (Dentro do if para maior de idade):
        Se for estudante, o programa analisa o salário para determinar se é baixo, médio ou alto.
    Se não for estudante, o programa também analisa o salário para determinar a mesma categorização (baixo, médio, alto).

Saída de Dados:
    Dependendo da combinação de idade, status de estudante e faixa salarial, o programa exibe mensagens detalhadas sobre cada condição.

Estrutura if-else Aninhada
    Nível 1: Verifica a idade (idade < 18).
    Nível 2: Dentro do bloco do primeiro if, verifica se o usuário é estudante.
    Nível 3: Dentro dos blocos dos if para maiores de idade e estudantes, verifica a faixa salarial do usuário (3000).

*/
#include <iostream>

using namespace std;

int main() {
    int idade;
    bool estudante;
    float salario;

    // Solicita a idade do usuário
    cout << "Digite sua idade: ";
    cin >> idade;

    // Solicita se o usuário é estudante
    cout << "Você é estudante? (1 para sim, 0 para não): ";
    cin >> estudante;

    // Solicita o salário do usuário
    cout << "Digite seu salário: ";
    cin >> salario;

    // Verifica se o usuário é menor de idade
    if (idade < 18) {
        cout << "Você é menor de idade." << endl;
        // Verifica se o menor de idade é estudante
        if (estudante) {
            cout << "Você é um estudante menor de idade." << endl;
            if (salario >= 3000){
                cout << "Você é um estudante menor de idade com alto salario" << endl;
            } else {
                cout << "Você é um estudante menor de idade com baixo salario" << endl;
            }
        } else {
            cout << "Você é um não-estudante menor de idade." << endl;
            if (salario >= 3000){
                cout << "Você é um não estudante menor de idade com alto salario" << endl;
            } else {
                cout << "Você é um não estudante menor de idade com baixo salario" << endl;
            }
        }
    } else {
        cout << "Você é maior de idade." << endl;
        // Verifica se o maior de idade é estudante
        if (estudante) {
            cout << "Você é um estudante maior de idade." << endl;
            // Verifica o salário do estudante maior de idade
            if (salario < 3000) {
                cout << "Você é um estudante maior de idade com um salário baixo." << endl;
            } else {
                cout << "Você é um estudante maior de idade com um salário alto." << endl;
            }
        } else {
            cout << "Você é um não-estudante maior de idade." << endl;
            // Verifica o salário do não-estudante maior de idade
            if (salario < 3000) {
                cout << "Você é um não-estudante maior de idade com um salário baixo." << endl;
            } else {
                cout << "Você é um não-estudante maior de idade com um salário alto." << endl;
            }
        }
    }

    return 0;
}
