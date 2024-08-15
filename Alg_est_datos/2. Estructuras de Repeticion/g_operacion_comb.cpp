/*
7. Dados 15 números enteros, informar el promedio de los mayores que 100 y la suma de los
menores que –10.
*/

#include <iostream>

//PROTOTIPO
int ingresar_numero();

int main(){

    int numero;
    int sum_mayor_cien = 0;
    int contador_may = 0;
    int contador_men = 0;
    int sum_menor_negDiez = 0;

    for(int i=0;i<15;i++){
        
        numero = ingresar_numero();

        if(numero > 100){
            contador_may = contador_may + 1; 
            sum_mayor_cien = sum_mayor_cien + numero;
        } else if(numero < -10){
            contador_men = contador_men + 1; 
            sum_menor_negDiez = sum_menor_negDiez + numero;
        }
    }

    std::cout << "La suma de los numeros mayores a 100 es " << sum_mayor_cien << std::endl;
    std::cout << "El promedio es " << float(sum_mayor_cien/contador_may) << std::endl;

    std::cout << "La suma de los numeros menores a -10 es " << sum_menor_negDiez << std::endl;
    std::cout << "El promedio es " << float(sum_menor_negDiez/contador_men) << std::endl;

    return 0;
}

int ingresar_numero(){
    int n;
    std::cout << "Ingrese un numero entero: " << std::endl;
    std::cin >> n;

    return n;
}



// ver casteo de flotantes en el promedio