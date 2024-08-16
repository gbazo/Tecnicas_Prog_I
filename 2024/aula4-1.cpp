/*
Exemplo: Cálculo de Valor de Venda com Desconto

O código a seguir calcula o valor final de um produto após aplicar um desconto e exibe o resultado com uma precisão específica

Explicação do Código
    1. Declaração das Variáveis:
        ◦ precoOriginal: Armazena o preço original do produto.
        ◦ percentualDesconto: Armazena o percentual de desconto aplicado.
        ◦ valorDesconto: Calcula o valor do desconto em reais.
        ◦ precoFinal: Calcula o preço final após aplicar o desconto.
    2. Entrada de Dados:
        ◦ O usuário insere o preço original do produto e o percentual de desconto.
    3. Cálculos:
        ◦ O valor do desconto é calculado multiplicando o percentual de desconto (dividido por 100) pelo preço original.
        ◦ O preço final é obtido subtraindo o valor do desconto do preço original.
    4. Exibição dos Resultados:
        ◦ fixed é usado para garantir que os números de ponto flutuante sejam exibidos em notação decimal fixa.
        ◦ setprecision(2) define a precisão para 2 casas decimais, adequada para exibir valores monetários.

*/


#include <iostream>
#include <iomanip>  // Necessário para setprecision e fixed

using namespace std;

int main() {
    // Declaração das variáveis
    double precoOriginal, percentualDesconto, valorDesconto, precoFinal;

    // Solicita a entrada do usuário
    cout << "Digite o preço original do produto: ";
    cin >> precoOriginal;

    cout << "Digite o percentual de desconto (em %): ";
    cin >> percentualDesconto;

    // Calcula o valor do desconto e o preço final
    valorDesconto = (percentualDesconto / 100) * precoOriginal;
    precoFinal = precoOriginal - valorDesconto;

    // Exibe os resultados com precisão
    cout << fixed;  // Aplica a notação decimal fixa para todas as saídas seguintes

    // Exibe o valor do desconto e o preço final com 2 casas decimais
    cout << "Valor do desconto: " << setprecision(2) << valorDesconto << " reais" << endl;
    cout << "Preço final com desconto: " << setprecision(2) << precoFinal << " reais" << endl;

    return 0;
}
