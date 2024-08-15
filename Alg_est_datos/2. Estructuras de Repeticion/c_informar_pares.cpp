/* 
3. Informar los primeros n números pares positivos, siendo n un número entero positivo ingresado
por teclado.
*/

#include <iostream>

//PROTOTIPO
int ingreso_numero();

int main(){

    int numero;

    numero = ingreso_numero();

    for(int i=0;i<numero;i++){
        if(i%2 == 0){
            std::cout << i << std::endl; 
        }
    }

    return 0;
}

//AUXILIAR
int ingreso_numero() {
    int n;
    std::cout << "Ingrese un numero entero positivo: ";
    std::cin >> n;
    return n; 
}