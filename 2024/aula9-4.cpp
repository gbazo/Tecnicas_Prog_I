/*
Switch - case com dois níveis

exemplo de um switch-case com dois níveis. Neste exemplo, o usuário escolhe uma categoria e, em seguida, escolhe uma subcategoria dentro dessa categoria. O programa exibe uma mensagem com base nas escolhas feitas.

Explicação do Código
    1. Entrada do Usuário:
        ◦ O usuário é solicitado a escolher uma categoria (1 a 3).
    2. Primeiro Nível switch:
        ◦ Dependendo da escolha da categoria, o programa entra em um case específico (Frutas, Vegetais, ou Grãos).
    3. Segundo Nível switch:
        ◦ Dentro de cada case da categoria, há um segundo switch para selecionar a subcategoria.
        ◦ O usuário escolhe a subcategoria, e o programa exibe uma mensagem correspondente.
    4. Mensagens de Erro:
        ◦ Se a subcategoria escolhida não está na lista, o programa exibe uma mensagem de erro específica para a categoria.
Uso
Este exemplo demonstra como o switch-case pode ser usado em múltiplos níveis para criar menus ou estruturas de decisão mais complexas, facilitando a leitura e a manutenção do código em situações onde há várias escolhas possíveis.

*/

#include <iostream>

using namespace std;

int main() {
    int categoria, subcategoria;

    cout << "Escolha uma categoria (1-3):" << endl;
    cout << "1. Frutas" << endl;
    cout << "2. Vegetais" << endl;
    cout << "3. Grãos" << endl;
    cin >> categoria;

    switch (categoria) {
        case 1: // Categoria: Frutas
            cout << "Escolha uma subcategoria (1-2):" << endl;
            cout << "1. Cítricas" << endl;
            cout << "2. Berries" << endl;
            cin >> subcategoria;
            
            switch (subcategoria) {
                case 1:
                    cout << "Você escolheu: Frutas Cítricas" << endl;
                    break;
                case 2:
                    cout << "Você escolheu: Berries" << endl;
                    break;
                default:
                    cout << "Opção inválida para Frutas" << endl;
                    break;
            }
            break;

        case 2: // Categoria: Vegetais
            cout << "Escolha uma subcategoria (1-2):" << endl;
            cout << "1. Folhosos" << endl;
            cout << "2. Raízes" << endl;
            cin >> subcategoria;
            
            switch (subcategoria) {
                case 1:
                    cout << "Você escolheu: Vegetais Folhosos" << endl;
                    break;
                case 2:
                    cout << "Você escolheu: Raízes" << endl;
                    break;
                default:
                    cout << "Opção inválida para Vegetais" << endl;
                    break;
            }
            break;

        case 3: // Categoria: Grãos
            cout << "Escolha uma subcategoria (1-2):" << endl;
            cout << "1. Inteiros" << endl;
            cout << "2. Processados" << endl;
            cin >> subcategoria;
            
            switch (subcategoria) {
                case 1:
                    cout << "Você escolheu: Grãos Inteiros" << endl;
                    break;
                case 2:
                    cout << "Você escolheu: Grãos Processados" << endl;
                    break;
                default:
                    cout << "Opção inválida para Grãos" << endl;
                    break;
            }
            break;

        default:
            cout << "Categoria inválida" << endl;
            break;
    }

    return 0;
}