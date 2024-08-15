/*
3. Dados 'n' valores que se ingresan por teclado, mostrar el mayor y la cantidad de veces que fue
ingresado
*/

#include <iostream>

// Function Prototypes
int ingresar_numero();
void getMayorVeces(int &mayor, int &veces, int iteraciones);

int main() {

    // Declaration of variables
    int mayor;
    int veces;
    int iteraciones;

    std::cout << "Inicio del programa" << std::endl;

    // Indicate the number of times we are going to iterate
    std::cout << "Ingrese la cantidad de valores que se analizarán: ";
    iteraciones = ingresar_numero();

    // Initialize the variable 'mayor' with the first number entered
    std::cout << "Ingrese el primer número: ";
    mayor = ingresar_numero();
    veces = 1;

    // Function call to calculate the maximum value and its occurrences
    getMayorVeces(mayor, veces, iteraciones);

    // Show the output
    std::cout << "El mayor valor es " << mayor << " y se ingresó " << veces << " veces." << std::endl;

    return 0;
}

// Function to input a number
int ingresar_numero() {
    int n;
    std::cin >> n;
    return n;
}

// Function that captures the maximum value entered and the number of times it is repeated
void getMayorVeces(int &mayor, int &veces, int iteraciones) {
    for (int i = 1; i < iteraciones; i++) {
        int numero = ingresar_numero();  // Declare `numero` within the loop

        if (numero > mayor) {
            mayor = numero;
            veces = 1;
        } else if (numero == mayor) {
            veces++;
        }
        // No need for else block since `mayor` and `veces` remain unchanged if `numero < mayor`
    }
}