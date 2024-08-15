/*
1. Dados dos valores que se ingresan por teclado, mostrar por pantalla el menor de ellos.
*/

#include <iostream>;

// Prototipo de funciones
int comparar_valores(int, int);

// Función principal
int main() {
    int valor_1, valor_2;

    std::cout << "Ingrese un valor: ";
    std::cin >> valor_1;

    std::cout << "Ingrese otro valor: ";  
    std::cin >> valor_2;

    std::cout << "El menor valor es " << comparar_valores(valor_1, valor_2) << std::endl;
    return 0;
}

// Función auxiliar
int comparar_valores(int a, int b) {
    int menor;

    if (a > b) {
        menor = b;  
    } else if (a == b) {  
        menor = a;  
    } else {
        menor = a;  
    }

    return menor;
}

//OTRA VERSION

/*
// Función auxiliar simplificada
int comparar_valores(int a, int b) {
    return (a < b) ? a : b;  // Devuelve a si es menor que b, de lo contrario, devuelve b
}

// Función principal
int main() {
    int valor_1, valor_2;

    std::cout << "Ingrese un valor: ";
    std::cin >> valor_1;

    std::cout << "Ingrese otro valor: ";
    std::cin >> valor_2;

    std::cout << "El menor valor es " << comparar_valores(valor_1, valor_2) << std::endl;
    return 0;
}
*/