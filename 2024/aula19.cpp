/*
FUNÇÕES

Em C++, uma função é um bloco de código que realiza uma tarefa específica. Usar funções ajuda a organizar o código, reduzir a repetição e facilitar a leitura e manutenção do programa.

A estrutura básica de uma função em C++ é:

tipo_de_retorno nome_da_funcao(parametros) {
    // Código da função
    return valor; // (Opcional, dependendo do tipo de retorno)
}

Onde temos:
1.	tipo_de_retorno: Define o tipo de dado que a função retorna. Pode ser int, float, void (sem retorno), entre outros.
2.	nome_da_funcao: O nome dado à função, que será usado para chamá-la.
3.	parametros: São os valores que a função pode receber para trabalhar (podem ser opcionais).
4.	return: Define o valor a ser retornado pela função (necessário se a função tiver um tipo de retorno diferente de void).

Benefícios de Usar Funções
1.	Organização: Cada função realiza uma tarefa específica, tornando o código mais organizado.
2.	Reutilização: Funções podem ser chamadas várias vezes, evitando a repetição de código.
3.	Modularidade: É possível modificar o comportamento de uma função sem alterar o resto do programa.

Exemplo:

Soma de 2 numeros passando pela função
*/

#include <iostream>
using namespace std;

int somar(int a, int b){
    cout << "Dentro da função foi recebido: " << a << " e " << b;
    return a + b;
}

int main(){
    int resultado, num1, num2;

    cout << " ### Soma de 2 numeros com funções ### " << endl;

    cout << "Numero 1: ";
    cin >> num1;

    cout << "\nNumero 2: ";
    cin >> num2;

    resultado = somar(num1, num2);

    cout << "\nA soma é: " << resultado << endl;

    return 0;
}
