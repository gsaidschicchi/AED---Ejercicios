/*
12. Hacer un algoritmo que calcule e informe el factorial de números positivos ingresados por teclado.
El lote de números finaliza con cero.
*/

#include <iostream>

//PROTOTIPO
int ingresar_numero();
int factorial(int);

int main(){

int numero;
int resultado;
    do{
        numero = ingresar_numero();
        resultado = factorial(numero);
        std::cout << "El factorial de " << numero << " es " << resultado << std::endl;
    }    
    while(numero!=0);
    
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