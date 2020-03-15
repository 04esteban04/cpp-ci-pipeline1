#include <iostream>

using namespace std;

class Calculadora {
public:
    static void sumar(int, int);
    static void restar(int, int);
    static void multiplicar(int, int);
    static void dividir(float, float);
};

void Calculadora :: sumar(int num1, int num2) {
    int suma = 0;
    suma = num1 + num2;
    cout << "La suma es de: " << suma << endl;
}

void Calculadora :: restar(int num1, int num2) {
    int resta = 0;
    resta = num1 - num2;
    cout << "La resta es de: " << resta << endl;
}

void Calculadora :: multiplicar(int num1, int num2) {
    int mult = 0;
    mult = num1 * num2;
    cout << "La multiplicación es de: " << mult << endl;
}

void Calculadora :: dividir(float num1, float num2) {
    float division = 0;
    division = num1 / num2;
    cout << "La division es de: " << division << endl;
}


int main(){

    Calculadora calc = Calculadora();

    calc.sumar(1,2);
    calc.restar(1,2);
    calc.multiplicar(1,2);
    calc.dividir(1,2);

    return 0;
}
