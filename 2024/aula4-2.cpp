/*
EXERCICIO

Com base no código "Cálculo de Valor de Venda com Desconto" acrescente o uso de um cupom de desconto, ou seja, além de todas as funcionalidades presentes no código anterior, deverá ser solicitado em tela a inclusão de um cupom de desconto, o usuario deverá digitar o percentual de desconto deste cupom (semelhante ao percentual de desconto). Caso o usuario não possua um cupom desconto o valor inserido deverá ser 0.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double PrecoOriginal, percentualDesconto, valorDesconto, precoIntermediario, cupomDesconto, precoFinal;

    cout << "Digite o valor do produto: ";
    cin >> PrecoOriginal;

    cout << "Digite o percentual de desconto (em %): ";
    cin >> percentualDesconto;

    cout << "CUPOM DESCONTO" << endl;
    cout << "Se possuir, digite o valor (%), se nao insira zero: ";
    cin >> cupomDesconto;

    valorDesconto = (percentualDesconto / 100) * PrecoOriginal;
    precoIntermediario = PrecoOriginal - valorDesconto;
    precoFinal = precoIntermediario - ((cupomDesconto / 100) * precoIntermediario);

    cout << fixed << setprecision(2);

    cout << "Valor desconto: " << valorDesconto << " reais" << endl;
    cout << "Preco com desconto: " << precoIntermediario << " reais" << endl;
    cout << "Preco final: " << precoFinal << endl;

    return 0;
}