/*
Erro de entrada CIN

Quando inserimos um valor com cin diferente do esperado, ocorre uma falha ao tentar converter a entrada não numérica para um int, e o estado de erro do cin não permite novas entradas até que o erro seja tratado.

Para resolver esse problema, você precisa limpar o estado de erro do cin e ignorar a entrada inválida

Explicação das Alterações

    1. Verificação de Falha:
        ◦ Após tentar ler a entrada com cin >> opcao;, é verificado se cin.fail() (usada para verificar se uma operação de entrada (como a leitura de dados usando std::cin) falhou) retornou true, o que indica que houve uma falha na leitura (por exemplo, o usuário digitou uma letra em vez de um número).
    2. Limpeza do Estado de Erro:
        ◦ cin.clear(); limpa o estado de erro do cin, permitindo novas entradas.
    3. Ignorar a Entrada Inválida:
        ◦ cin.ignore(numeric_limits<streamsize>::max(), '\n'); ignora o restante da linha de entrada até o caractere de nova linha (\n). Isso remove a entrada inválida da fila de entrada.
    4. Reinicialização da Opção:
        ◦ Define a variável opcao como 0 para garantir que o loop continue até que o usuário insira uma opção válida.

*/

#include <iostream>
#include <limits> // utilizada como parte do tratamento

using namespace std;

int main (){
    int opcao;

    do {
        cout << "### MENU DE OPCOES ###" << endl;
        cout << "1. Opção 1" << endl;
        cout << "2. Opção 2" << endl;
        cout << "3. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        // verifica se a entrada foi bem-sucedida
        if (cin.fail()){
            // limpa o estado de erro cin
            cin.clear();
            // limpa a linha de entrada completa
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Entrada inválida. Tente novamente." << endl;
            opcao = 0; // define opcao como invalida para continuar o loop
        } else {
            switch(opcao){
                case 1:
                    cout << "Você escolheu a opcao 1." << endl;
                    break;
                case 2:
                    cout << "Você escolheu a opcao 2." << endl;
                    break;
                case 3:
                    cout << "Saindo...." << endl;
                    break;
                default:
                    cout << "Opção invalida. Tente novamente!" << endl;
                    break;
            }
        }
    } while (opcao != 3); //continua até que a op 3 sir seja escolhida
    
    return 0;
}