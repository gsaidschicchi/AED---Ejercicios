/*
3. Hacer un algoritmo que lea 'n' edades de alumnos y muestre por pantalla las edades que superen a
la edad promedio.
*/

#include <iostream>

// PROTOTIPOS
int ingresar_cantidad();
int ingresar_edad();
float calcular_promedio(int edades[], int cantidad);
void calcular_edadesMayorPromedio(int edades[], int edades_mayorPromedio[], float promedio, int cantidad, int &cantidad_mayor);

int main() {
    // declaración de variables
    int cantidad = ingresar_cantidad();
    float promedio;
    int cantidad_mayor = 0;

    // declaración de vectores
    int edades[cantidad];
    int edades_mayorPromedio[cantidad];

    // inicializar el vector edades
    for (int i = 0; i < cantidad; i++) {
        edades[i] = ingresar_edad();
    }

    // calcular Promedio
    promedio = calcular_promedio(edades, cantidad);
    
    // calcular edades mayores al promedio
    calcular_edadesMayorPromedio(edades, edades_mayorPromedio, promedio, cantidad, cantidad_mayor);
    
    // mostrar edades mayores al promedio
    std::cout << "Las edades mayores al promedio (" << promedio << ") son: ";
    for (int i = 0; i < cantidad_mayor; i++) {
        std::cout << edades_mayorPromedio[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

// AUXILIAR

int ingresar_cantidad() {
    int n;
    std::cout << "Ingrese la cantidad de elementos del vector: ";
    std::cin >> n;
    return n;
}

int ingresar_edad() {
    int n;
    std::cout << "Ingrese la edad del alumno: ";
    std::cin >> n;
    return n;
}

float calcular_promedio(int edades[], int cantidad) {
    int sum = 0;
    for (int i = 0; i < cantidad; i++) {
        sum += edades[i];
    }
    return static_cast<float>(sum) / cantidad;
}

void calcular_edadesMayorPromedio(int edades[], int edades_mayorPromedio[], float promedio, int cantidad, int &cantidad_mayor) {
    cantidad_mayor = 0; // inicializo la cantidad de edades mayores al promedio
    for (int i = 0; i < cantidad; i++) {
        if (edades[i] > promedio) {
            edades_mayorPromedio[cantidad_mayor] = edades[i];
            cantidad_mayor++;
        }
    }
}
