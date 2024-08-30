/*
Exercício: Cálculo do IMC e Classificação de Saúde

Crie um programa em C++ que calcula o Índice de Massa Corporal (IMC) de um usuário e fornece uma classificação detalhada com base no valor do IMC. O programa deve lidar com entradas inválidas e fornecer recomendações apropriadas com base nas faixas de IMC.

Enunciado:
    1. Desenvolvimento do Programa:
        ◦ Crie um programa em C++ que solicite ao usuário seu peso (em quilogramas) e altura (em metros).
        ◦ O programa deve calcular o IMC usando a fórmula: IMC = peso / (altura * altura).
        ◦ Exiba o valor do IMC com precisão de duas casas decimais.
    2. Verificação de Dados:
        ◦ Adicione uma verificação para garantir que o peso e a altura inseridos sejam maiores que zero. Se qualquer valor for menor ou igual a zero, exiba uma mensagem de erro indicando que os dados devem ser maiores que zero.
    3. Classificação do IMC:
        ◦ Classifique o IMC em diferentes categorias e forneça recomendações com base nos seguintes critérios:
            ▪ Abaixo do Peso:
                • IMC < 18.5
                • Subcategorias:
                    ◦ IMC < 16: "Aviso: IMC muito abaixo do normal. Considere consultar um profissional de saúde."
                    ◦ 16 ≤ IMC < 16.9: "Aviso: IMC abaixo do normal. É recomendável buscar orientação médica."
            ▪ Peso Normal:
                • 18.5 ≤ IMC < 24.9
                • Subcategorias:
                    ◦ 18.5 ≤ IMC < 20: "Aviso: Peso normal, mas considere manter uma dieta balanceada e exercício regular."
                    ◦ 20 ≤ IMC < 22.5: "Aviso: Peso normal, ótimo trabalho em manter uma boa forma!"
            ▪ Sobrepeso:
                • 25.0 ≤ IMC < 29.9
                • Subcategorias:
                    ◦ 25 ≤ IMC < 26.9: "Aviso: Sobrepeso leve. Considere monitorar sua dieta e aumentar a atividade física."
                    ◦ 27 ≤ IMC < 29.9: "Aviso: Sobrepeso moderado. É recomendável buscar aconselhamento nutricional."
            ▪ Obesidade:
                • IMC ≥ 30
                • Subcategorias:
                    ◦ 30 ≤ IMC < 34.9: "Aviso: Obesidade classe 1. Considerar consulta com um profissional de saúde para orientação."
                    ◦ 35 ≤ IMC < 39.9: "Aviso: Obesidade classe 2. É importante procurar apoio médico para tratar a obesidade."
                    ◦ IMC ≥ 40: "Aviso: Obesidade classe 3 (obesidade mórbida). É essencial buscar um plano de tratamento com urgência."

*/

#include <iostream>
#include <iomanip> // Necessário para std::setprecision

using namespace std;

int main() {
    float peso, altura, imc;

    // Solicita o peso do usuário
    cout << "Digite o seu peso (em kg): ";
    cin >> peso;

    // Solicita a altura do usuário
    cout << "Digite a sua altura (em metros): ";
    cin >> altura;

    // Verifica se a altura e o peso são válidos
    if (peso <= 0 || altura <= 0) {
        cout << "Peso e altura devem ser maiores que zero." << endl;
    } else {
        // Calcula o IMC
        imc = peso / (altura * altura);

        // Exibe o IMC com precisão de 2 casas decimais
        cout << fixed << setprecision(2);
        cout << "Seu IMC é: " << imc << endl;

        // Classifica o IMC com if-else aninhado
        if (imc < 18.5) {
            cout << "Classificação de IMC: Abaixo do peso" << endl;
            if (imc < 16) {
                cout << "Aviso: IMC muito abaixo do normal. Considere consultar um profissional de saúde." << endl;
            } else if (imc >= 16 && imc < 17) {
                cout << "Aviso: IMC abaixo do normal. É recomendável buscar orientação médica." << endl;
            }
        } else if (imc >= 18.5 && imc < 25) {
            cout << "Classificação de IMC: Peso normal" << endl;
            if (imc >= 18.5 && imc < 20) {
                cout << "Aviso: Peso normal, mas considere manter uma dieta balanceada e exercício regular." << endl;
            } else if (imc >= 20 && imc < 22.5) {
                cout << "Aviso: Peso normal, ótimo trabalho em manter uma boa forma!" << endl;
            }
        } else if (imc >= 25.0 && imc < 30) {
            cout << "Classificação de IMC: Sobrepeso" << endl;
            if (imc >= 25 && imc < 26.99) {
                cout << "Aviso: Sobrepeso leve. Considere monitorar sua dieta e aumentar a atividade física." << endl;
            } else if (imc >= 27 && imc < 30) {
                cout << "Aviso: Sobrepeso moderado. É recomendável buscar aconselhamento nutricional." << endl;
            }
        } else {
            cout << "Classificação de IMC: Obesidade" << endl;
            if (imc >= 30 && imc < 35) {
                cout << "Aviso: Obesidade classe 1. Considerar consulta com um profissional de saúde para orientação." << endl;
            } else if (imc >= 35 && imc < 40) {
                cout << "Aviso: Obesidade classe 2. É importante procurar apoio médico para tratar a obesidade." << endl;
            } else {
                cout << "Aviso: Obesidade classe 3 (obesidade mórbida). É essencial buscar um plano de tratamento com urgência." << endl;
            }
        }
    }

    return 0;
}
