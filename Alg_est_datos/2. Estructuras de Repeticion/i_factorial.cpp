/*
9. Dado un número entero positivo informar su factorial.
*/

#include <iostream>

//PROTOTIPO
int ingresar_numero();
int factorial(int);

int main(){
    
    int numero = ingresar_numero();

    int resultado = factorial(numero);

    std::cout << "El factorial de " << numero << " es " << resultado << std::endl;

    return 0;
}

//AUXILIAR

int ingresar_numero(){
    int n;
    std::cout << "Ingrese un numero entero positivo: " << std::endl;
    std::cin >> n;

    return n;
}

int factorial(int n) {
    int acum = 1;

    for (int i = 1; i <= n; i++) { 
        acum = acum * i; 
    }
    return acum;
}