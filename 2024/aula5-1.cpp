/*
Verificação de Nota de Estudante

O código abaixo calcula a media ponderada do estudante levando em consideração os mesmos critérios aplicados na universidade.

Etapas para realização da construção do algoritmo:

1 - Entrada de dados:
    - Serão declaradas 5 variáveis para armazenar as provas 1 e 2, trabalhos 1 e 2, média.
    - Por meio de cout's será solicitado ao usúario que insira as informações necessárias.

2 - Processamento dos dados:
    - Após a entrada das 4 variáveis o sistema automaticamente calcula e armazena o resultado na variável média de acordo com a seguinte regra: ambas as provas possuem peso 6 e os trabalhos peso 4, a nota 2 possui peso 2 e é somada a nota 1, o valor total deve ser dividido por 3

3 - Saída dos dados:
    - Com o resultado da média armazenado o sistema por meio de cout irá exibir o valor obtido pelo estudante na tela, uma verificação por meio de estrutura de condição será iniciada para verificar se a média 7 foi atingida, caso sim, o sistema deverá imprimir em tela uma mensagem de aprovação, caso contrário (else), o sistema irá imprimir uma mensagem de reprovação.

*/

#include <iostream>

using namespace std;

int main (){
    // declaração das variaveis
    float nota1, nota2;
    float trab1, trab2;
    float media;

    cout << " ### CALCULA MEDIA BARAO DE MAUA ### " << endl;

    cout << "\nDigite a nota N1 do estudante: ";
    cin >> nota1;

    cout << "\nDigite a nota T1 do estudante: ";
    cin >> trab1;

    cout << "\nDigite a nota N2 do estudante: ";
    cin >> nota2;

    cout << "\nDigite a nota T2 do estudante: ";
    cin >> trab2;

    media = (((nota1 * 0.6) + (trab1 * 0.4)) + 2 * ((nota2 * 0.6) + (trab2 * 0.4))) / 3;

    cout << "\n ### RESULTADO ### " << endl;
    cout << "Média: " << media << endl;

    if (media >= 7.0){
        cout << "O estudante passou!" << endl;
    } else {
        cout << "O estudante não passou!" << endl;
    }

    return 0;
}