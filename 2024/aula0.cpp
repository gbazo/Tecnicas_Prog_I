/*

#include <iostream>
    Instrui o compilador a incluir o conteúdo do arquivo especificado (<iostream>) no momento da compilação. O arquivo <iostream> faz parte da biblioteca padrão C++ e fornece funcionalidades para a entrada e saída de dados, como std::cin, std::cout, std::cerr, etc.

using namespace std;
    Em C++, um namespace é uma forma de organizar o código e evitar conflitos de nomes. O namespace std contém as definições da biblioteca padrão C++, como as classes e funções usadas para entrada e saída (cout, cin, etc.). Ao usar using namespace std;, você está dizendo ao compilador que quer usar os nomes do namespace std diretamente, sem precisar prefixá-los com std::. Por exemplo, cout em vez de std::cout.

int main() { ... }
    A função main é o ponto de entrada do programa C++. Quando o programa é executado, a execução começa a partir desta função. Ela deve retornar um valor inteiro que indica o status da execução do programa para o sistema operacional. O valor retornado por main geralmente é 0 se o programa foi executado com sucesso.

cout << "Hello World";
    É usado para exibir dados na saída padrão (normalmente o console). O operador << é usado para enviar dados para cout. Neste caso, o texto "Hello World" é enviado para o fluxo de saída e exibido na tela. Este é um exemplo de saída de texto simples.

return 0;
    A instrução return 0; indica que a função main está terminando e está retornando o valor 0 para o sistema operacional. O valor 0 normalmente indica que o programa foi executado com sucesso. Outros valores diferentes de 0 podem ser usados para indicar diferentes tipos de erros ou status de execução.

RESUMO
    Inclusão da Biblioteca: #include <iostream> inclui o suporte para entrada e saída.
    Namespace: using namespace std; permite usar std diretamente sem o prefixo std::.
    Função Principal: int main() { ... } é o ponto de entrada do programa.
    Saída de Dados: cout << "Hello World"; exibe "Hello World" no console.
    Retorno: return 0; encerra a função main e indica sucesso na execução.

*/

#include <iostream>

using namespace std;

int main(){
    cout << "Hello World";

    return 0;
}