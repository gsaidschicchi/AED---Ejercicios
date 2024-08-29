Arrays (o Vectores)

--> son arreglos de una sola dimensión que se usan para almacenar multiples valores (de un mismo tipo de dato) en una sola variable.

--> permiten almacenar muchos valores en posiciones de memoria contiguas (valores: numeros, letras, etc).

--> Declaración de un vector en c++: 'tipoDeDato nombreDelVector[tamaño]';

--> Ej: 
int my_vector1[10];
float my_vector2[25];
string my_vector3[500];
bool my_vector4[1000];
char my_vector5[2];

--> Inicializar un vector: 
FORMA 1: string vector[5] = {"5", "hola", "2.7", "8,9", "adios"}; 

FORMA 2: int vector2[] = {1,2,3,4,10,9,80,70,19}; // SI NO ESPECIFICO EL TAMAÑO, EL VECTOR TENDRÁ EL NUMERO DE ELEMENTOS INCLUIDOS DENTRO DE LA LLAVE

--> Particularidades

1) 

INCORRECTO:
int vector2[3];
vector2[3] = {1,5,10};

Al declarar un vector sin ser inicializado, cada una de las casillas de este vector toma como valor el valor por defecto del tipo de variable, para el caso de los enteros (int) es -858993460. Así entonces para asignar valores a cada casilla lo hacemos así:

CORRECTO:

int vector2[3];
vector2[0] = 1; // el '[0]' indica la indexación 
vector2[1] = 3;
vector2[2] = 10;

2) 

float vector3[5] = {10.5};

Si ponemos una cantidad de elementos menor a la del tamaño real del vector, estamos queriendo decir que estos elementos toman los valores puestos entre las llaves y los demás serian cero, para el caso del código anterior el primer elemento (el del índice cero) va a tener un valor de 10.5 y los otros 4 elementos van a valer cero.

--> Obtener el valor de una casilla especifica (sabiendo la posición que ocupa dentro del vector)

float vector4[5] = {10.5, 5.1, 8.9, 10, 95.2}; //Array con 5 elementos
float numero5 = vector4[4]; //Para acceder al elemento 5, se usa el índice 4
float primerNumero = vector4[0]; //Para el primer elemento se usa el índice 0

--> Recorrer un Array

Se puede recorrer usualmente con un 'ciclo for', comenzara desde cero e ira hasta el tamaño del vector, de modo que la variable de control que generalmente llamamos "i", será la que va a ir variando entre cero y el tamaño del array, de esta forma al poner la i al interior de los corchetes, estaremos accediendo al valor de cada casilla del vector y podremos hacer lo que sea necesario con dicho valor.

