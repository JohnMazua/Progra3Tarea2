#include "Evaluador.h"
#include <iostream>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    return *ptr; // retorna el valor de ptr
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    return *a+*b; // retoruna la suma de *a y *b
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    if(a==b) return true; // si a=b entonces verdadero, si no falso
    return false;
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    if(*a==*b) return true; si *a=*b verdadero, si no falso.
    return false;
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
//    string name;
//    name = *a;
//    char letra = name[0];
    return (*a)[0]; //retorna la primera letra de *a, tomando a *a como un arreglo
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
    int length=0,counter=0,total=0; // define las variables para el largo, el contador y el total
    length = (*a).size() ; // asigna a length el tamaño de *a
    if(length%2==0) counter = (length)/2; // si el tamaño es par divide entre 2
    else counter = (length-1)/2; // si es impar le resta 1 y divide entre 2
    for(int i=0; i<counter; i++){ // arranca un cycle de 0 hasta el contador
    if((*a)[i]==(*a)[length-(i+1)]) total=total+1; // si la posicion i = a la posicion del largo menos (i+1) [para evitar el character nulo al final se suma 1] agrega 1 al total
    }
    if(total==counter) return true; // si el total es igual al contador entonces la palabra es un palindromo
    else return false;
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    int *total = new int(1); // referencia la variable total con el valor de 1
    for(int i=0; i<*exponente; i++) // un cyclo repetitivo de la cantidad de veces del exponente
    {
    *total = (*total) * (*base); // multiplica el total por la base
    }

    return *total; // retorna el total.
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
