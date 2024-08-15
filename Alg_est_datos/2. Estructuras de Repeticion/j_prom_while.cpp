/*
10. Hacer un algoritmo que calcule el promedio de números enteros positivos ingresados por teclado
hasta que se ingrese un cero. Este cero sólo indica el fin de ingreso de datos, no se incluirá en el
promedio.
*/

#include <iostream>

// PROTOTIPO
int ingresar_numero();

int main() {
    int numero;
    int suma = 0;
    int contador = 0;
    float promedio = 0.0;

    do {
        numero = ingresar_numero();
        
        if (numero != 0) {  // Asegúrate de no incluir el cero en la suma ni el contador
            suma += numero;
            contador++;
        }
    } while (numero != 0);  // Continua hasta que se ingrese un 0
    
    if (contador > 0) {  // Solo calcula el promedio si se ingresaron números válidos
        promedio = static_cast<float>(suma) / contador;
    }

    std::cout << "Se ingresaron " << contador << " numeros. " << std::endl;
    std::cout << "La suma es " << suma << "." << std::endl;
    std::cout << "El promedio es " << promedio << "." << std::endl;

    return 0;
}

// AUXILIAR
int ingresar_numero() {
    int n;
    std::cout << "Ingrese un numero entero positivo (0 para terminar): " << std::endl;
    std::cin >> n;

    return n;
}