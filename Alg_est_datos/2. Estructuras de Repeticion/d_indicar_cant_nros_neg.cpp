/*
4. Informar la cantidad de números negativos que hay dentro de 10 números ingresados por teclado.
*/

#include <iostream>

//PROTOTIPO
int ingresar_numero();

int main(){

    int numero;
    int contador = 0;

    for(int i=0;i<10;i++){
        
        numero = ingresar_numero();
        if(numero < 0){
            contador = contador + 1;
        }
    }

    std::cout << "La cantidad de numeros negativos son " << contador << std::endl;

    return 0;
}

//AUXILIAR

int ingresar_numero(){
    int n;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    return n; 
}