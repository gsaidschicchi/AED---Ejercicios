//6. Dado un número de cinco cifras informar si es capicúa.

#include <iostream>

// PROTOTYPE
int ingresar_datos();
bool es_capicua(int);

int main() {
    int numero = ingresar_datos();

    if (es_capicua(numero)) {
        std::cout << "El numero ingresado es capicua." << std::endl;
    } else {
        std::cout << "El numero ingresado NO es capicua." << std::endl;
    }

    return 0;
}

// Function to input data
int ingresar_datos() {
    int numero;
    std::cout << "Ingrese un numero de cinco cifras: ";
    std::cin >> numero;

    // Validate input to ensure it's a five-digit number
    while (numero < 10000 || numero > 99999) {
        std::cerr << "Error: El numero debe tener cinco cifras. Intente de nuevo: ";
        std::cin >> numero;
    }

    return numero;
}

// Function to check if a number is a palindrome
bool es_capicua(int a) {
    // Extract digits
    int digito1 = a / 10000;         // First digit
    int digito2 = (a / 1000) % 10;   // Second digit
    int digito3 = (a / 100) % 10;    // Third digit (not used in comparison)
    int digito4 = (a / 10) % 10;     // Fourth digit
    int digito5 = a % 10;            // Fifth digit

    // Check if the number is a palindrome
    return (digito1 == digito5) && (digito2 == digito4);
}