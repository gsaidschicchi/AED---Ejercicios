/*
4. Dados 'n' valores distintos que se ingresan por teclado, mostrar los dos mayores.
*/

#include <iostream>

// PROTOTYPES
int ingresar_numero();
void calcularDosMayores(int &mayor, int &segundoMayor, int iteracion);

int main() {
    // Declaration of variables
    int mayor;
    int segundoMayor;
    int iteracion;

    // Start of the program
    std::cout << "INICIO DEL PROGRAMA" << std::endl;
    std::cout << "SE INGRESAN VALORES POR PANTALLA Y AL TERMINAR SE INDICARÁN LOS DOS VALORES MAS GRANDES" << std::endl;

    // Get the number of values to process
    std::cout << "Indique la cantidad de valores que se ingresarán: ";
    iteracion = ingresar_numero();

    // Initialize 'mayor' and 'segundoMayor' with the first two numbers
    std::cout << "Ingrese un numero: ";
    mayor = ingresar_numero();

    std::cout << "Ingrese otro numero: ";
    segundoMayor = ingresar_numero();

    // Swap if necessary to ensure 'mayor' is indeed the largest
    if (segundoMayor > mayor) {
        int temporal = mayor;
        mayor = segundoMayor;
        segundoMayor = temporal;
    }

    // Call the function to calculate the two largest values
    calcularDosMayores(mayor, segundoMayor, iteracion);

    // Display the results
    std::cout << "El valor mas alto es " << mayor << " y el segundo valor mas alto es " << segundoMayor << std::endl;

    return 0;
}

// AUXILIARY FUNCTIONS

// Function to input a number
int ingresar_numero() {
    int n;
    std::cin >> n;
    return n;
}

// Function to find the two largest numbers
void calcularDosMayores(int &mayor, int &segundoMayor, int iteracion) {
    for (int i = 2; i < iteracion; i++) {
        int numero = ingresar_numero();
        if (numero > mayor) {
            int temporal = mayor;
            mayor = numero;
            segundoMayor = temporal;
        } else if (numero < mayor && numero > segundoMayor) {
            segundoMayor = numero;
        }
    }
}
