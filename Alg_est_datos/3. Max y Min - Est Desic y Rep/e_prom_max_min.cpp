/*
5. Dado un conjunto de valores, que finaliza con un valor nulo, determinar e imprimir (si hubo
valores):
a) El valor máximo negativo
b) El valor mínimo positivo
*/

#include <iostream>

// PROTOTIPO
int ingresar_numero();
void calcular_mayorNeg(int numero, int &maxNeg, bool &existeNegativo);
void calcular_minimoPos(int numero, int &minPos, bool &existePositivo);

int main(){

    std::cout << "Inicio del programa" << std::endl;

    // Declaración de variables
    int numero;
    int maximoNegativo;
    int minimoPositivo;
    bool existeNegativo = false; // Indicadores para saber si existen números negativos o positivos
    bool existePositivo = false;

    // Entro al loop. Para salir ingreso '0'.
    do {
        numero = ingresar_numero();

        if (numero < 0) {
            if (!existeNegativo) {
                maximoNegativo = numero; // Inicializo la primera vez que se ingresa un negativo
                existeNegativo = true;
            } else {
                calcular_mayorNeg(numero, maximoNegativo, existeNegativo);
            }
        } else if (numero > 0) {
            if (!existePositivo) {
                minimoPositivo = numero; // Inicializo la primera vez que se ingresa un positivo
                existePositivo = true;
            } else {
                calcular_minimoPos(numero, minimoPositivo, existePositivo);
            }
        }
    } while (numero != 0);

    // Mostrar resultados si hay valores válidos
    if (existeNegativo) {
        std::cout << "El valor máximo negativo es: " << maximoNegativo << std::endl;
    } else {
        std::cout << "No se ingresaron valores negativos." << std::endl;
    }

    if (existePositivo) {
        std::cout << "El mínimo positivo es: " << minimoPositivo << std::endl;
    } else {
        std::cout << "No se ingresaron valores positivos." << std::endl;
    }

    return 0;
}

// Función para ingresar un número entero
int ingresar_numero(){
    int n;
    std::cout << "Ingrese un número entero (0 para terminar): ";
    std::cin >> n;
    return n;
}

// Función para calcular el mayor número negativo
void calcular_mayorNeg(int numero, int &maxNeg, bool &existeNegativo){
    if(numero > maxNeg){
        maxNeg = numero;
    }
}

// Función para calcular el menor número positivo
void calcular_minimoPos(int numero, int &minPos, bool &existePositivo){
    if(numero < minPos){
        minPos = numero;
    }
}
