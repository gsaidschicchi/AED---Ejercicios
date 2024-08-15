/*
11. Ingresar edades comprendidas entre 18 y 22, e imprimir cuántas veces se ingresó cada una de estas
edades. El lote finaliza con una edad igual a cero.
*/

#include <iostream>

// Function prototype
int ingresar_edad();

int main() {
    int edad;
    
    // Initialize all counters to zero
    int contador_18 = 0;
    int contador_19 = 0;
    int contador_20 = 0;
    int contador_21 = 0;
    int contador_22 = 0;

    do {
        edad = ingresar_edad();

        // Increment the appropriate counter based on the input
        if (edad == 18) {
            contador_18++;
        } else if (edad == 19) {
            contador_19++;
        } else if (edad == 20) {
            contador_20++;
        } else if (edad == 21) {
            contador_21++;
        } else if (edad == 22) {
            contador_22++;
        }
        // If edad == 0, the loop will end, which is fine here
    } while (edad != 0);

    // Print out the results
    std::cout << "Hay " << contador_18 << " personas que tienen 18 años." << std::endl;
    std::cout << "Hay " << contador_19 << " personas que tienen 19 años." << std::endl;
    std::cout << "Hay " << contador_20 << " personas que tienen 20 años." << std::endl;
    std::cout << "Hay " << contador_21 << " personas que tienen 21 años." << std::endl;
    std::cout << "Hay " << contador_22 << " personas que tienen 22 años." << std::endl;

    return 0;
}

// Function to input age
int ingresar_edad() {
    int n;
    std::cout << "Ingrese una edad - nro entero positivo (0 para terminar): " << std::endl;
    std::cin >> n;

    // Only return the input if it's within the valid range or is 0
    while (n != 0 && (n < 18 || n > 22)) {
        std::cout << "Edad invalida. Ingrese una edad entre 18 y 22, o 0 para terminar: " << std::endl;
        std::cin >> n;
    }

    return n;
}