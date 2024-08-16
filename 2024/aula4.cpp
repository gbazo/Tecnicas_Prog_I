/*
O manipulador setprecision é utilizado para definir o número de casas decimais exibidas ao imprimir números de ponto flutuante com cout. É uma ferramenta útil para formatar a saída de números com precisão específica, seja para exibir valores científicos, financeiros ou qualquer outro tipo de dados numéricos onde a precisão é importante.

Explicação do Código
    1. Inclusão da Biblioteca <iomanip>:
        ◦ Para usar setprecision, você deve incluir a biblioteca <iomanip>, que fornece manipuladores de fluxo para formatação de entrada e saída.
    2. Declaração das Variáveis:
        ◦ double pi é uma variável de ponto flutuante que armazenam o valor de π (pi).
    3. Exibição com Precisão Padrão:
        ◦ O cout exibe o valor de pi com a precisão padrão, que geralmente é 6 casas decimais.
    4. Exibição com Precisão Específica:
        ◦ fixed é usado para garantir que os números de ponto flutuante sejam exibidos em notação decimal (não científica).
        ◦ setprecision(2) define a precisão para 2 casas decimais.
        ◦ setprecision(4) define a precisão para 4 casas decimais.
        ◦ setprecision(10) define a precisão para 10 casas decimais.
    5. Uso do fixed:
        ◦ O manipulador fixed é utilizado para fixar o formato decimal, o que faz com que a precisão especificada por setprecision se aplique ao número de casas decimais após o ponto decimal.

        Exemplo:
            Número grande com 6 casas decimais: 1.23457e+09 (SEM FIXED)
            Número grande com 6 casas decimais: 1234567890.123456 (COM FIXED)
*/

#include <iostream>
#include <iomanip> // necessario para setprecision

using namespace std;

int main(){
    double pi = 3.141592653589793;

    // exibe o valor de pi com a precisao padrao 
    cout << "Valor de pi com precisao padrao: " << pi << endl;

    // exibe o valor de pi com 2 casas decimais
    cout << "Valor de pi com 2 casas decimais: " << fixed << setprecision(2) << pi << endl;

    // exibe o valor de pi com 4 casas decimais
    cout << "Valor de pi com 4 casas decimais: " << fixed << setprecision(4) << pi << endl;  

    // exibe o valor de pi com 10 casas decimais
    cout << "Valor de pi com 10 casas decimais: " << fixed << setprecision(10) << pi << endl;

    return 0;
}
