/*
EXERCICIO - IMC

Desenvolva um programa em c++ que realize o calculo do indice de massa corporea (IMC). Para isso o programa deverá solicitar o peso e a altura do usuario.

imc = peso / altura² - (altura * altura) 

Como saida o programa deverá informa o valor calculado de imc e sua classificação de acordo com as informações a seguir:

baixo peso < 18.5
Normal >= 18.5 and < 25 
Sobrepeso >= 25 and < 30
Obesidade >= 30

Requisito: uso iomanip e setprecision(2) (duas casas)
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // declaração das variaveis
    float peso, altura, imc;

    cout << " ### CALCULADORA DE IMC ### " << endl;

    cout << "\nDigite seu peso (kg): ";
    cin >> peso;

    cout << "\nDigite sua altura (m): ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << fixed << setprecision(2);
    
    cout << "\n ### RESULTADO ### ";
    cout << "\nSeu IMC é: " << imc << endl;

    if (imc < 18.5){
        cout << "Você esta abaixo do peso" << endl;
    } else if (imc >= 18.5 and imc < 25){
        cout << "Peso normal" << endl;
    } else if (imc >= 25 and imc < 30){
        cout << "Você esta acima do peso (Sobrepeso)" << endl;
    } else {
        cout << "Obesidade, procure um médico!" << endl;
    }

    return 0;
}