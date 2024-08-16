/*
Conversor de temperatura

Tipos de Variáveis:
    double celsius: Armazena a temperatura fornecida pelo usuário em Celsius.
    double fahrenheit: Armazena a temperatura convertida para Fahrenheit.
    double kelvin: Armazena a temperatura convertida para Kelvin.

Entrada (cin):
    O usuário fornece a temperatura em Celsius.

Fórmulas utilizadas
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    kelvin = celsius + 273.15;

Saída (cout):
    As temperaturas convertidas para Fahrenheit e Kelvin.

*/

#include <iostream>

using namespace std;

int main (){
    double celsius, fahrenheit, kelvin;

    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;

    cout << "Temperatura em Fahrenheit: " << fahrenheit << endl;
    cout << "Temperatura em Kelvin: " << kelvin << endl;

    return 0;
}
