// 1. Ingresar 10 números por teclado y mostrar sólo los positivos.

#include <iostream>

//PROTOTIPO
int ingresar_numero();

int main(){

    int numero;
    int i;

    for(i=0;i<10;i++){
        numero = ingresar_numero();
        if(numero > 0){ // no considero el cero como positivo
            std::cout << numero << std::endl;
        }
    }
    return 0;
}

//AUXILIARES
int ingresar_numero(){
    
    int n;

        std::cout << "Ingrese un numero " << std::endl;
        std::cin >> n;
        return n;
    }

