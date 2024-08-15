/*
5. Calcular e informar la sumatoria de 10 números ingresados por teclado.
*/

#include <iostream>

//PROTOTIPO
int ingresar_numero();

int main(){

    int numero;
    int sumatoria = 0;

    for(int i=0;i<10;i++){

        numero = ingresar_numero();
        sumatoria = sumatoria + numero; 
    }

    std::cout << "La sumatoria de los numeros ingresados es " << sumatoria << std::endl;
    return 0;
}

//AUXILIAR
int ingresar_numero(){
    int n;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    return n; 
}