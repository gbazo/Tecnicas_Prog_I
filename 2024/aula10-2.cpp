/*
Exemplo 3: Fatorial de um Número

Este programa calcula o fatorial de um número fornecido pelo usuário. O fatorial de um número n é o produto de todos os números inteiros positivos menores ou iguais a n (por exemplo, 5! = 5 × 4 × 3 × 2 × 1).

Explicação
    1. Variáveis:
        ◦ numero: Armazena o número inserido pelo usuário.
        ◦ fatorial: Armazena o resultado do cálculo do fatorial. Inicialmente, é definido como 1.
    2. Entrada do Usuário:
        ◦ O programa solicita ao usuário que insira um número para calcular o fatorial.
    3. Loop while:
        ◦ O laço while executa enquanto numero > 1. Em cada iteração, o valor atual de numero é multiplicado pelo valor atual de fatorial.
        ◦ Depois, numero é decrementado (reduzido em 1). Isso continua até que numero seja igual a 1, momento em que o loop termina.
    4. Saída:
        ◦ Após a conclusão do loop, o valor final de fatorial (que agora contém o produto de todos os números de numero até 1) é exibido.
    5. Importância do Controle de Fluxo:
        ◦ O controle do valor de numero é essencial para garantir que o cálculo do fatorial seja realizado corretamente. O decremento progressivo reduz o número até que o loop termine.

*/

#include <iostream>

using namespace std;

int main(){
    int numero; // armazena o num inserido pelo user
    int fatorial = 1; // armazena o resultado do fatorial

    cout << "Digite um numero para calcular seu fatorial: ";
    cin >> numero;

    while (numero > 1){// laço que executa enquanto o num for maior que 1
        fatorial *= numero; // multiplica o fatorial pelo num atual
        cout << "Valor do fatorial neste momento: " << fatorial << endl;
        numero--;
    }

    cout << "O fatorial é: " << fatorial << endl;

    return 0;
}