#include <stdio.h>
#include <stdbool.h>

int solucion(int numero, bool efectuar_operacion, int (*funcion)(int)){

    if(*funcion != NULL && efectuar_operacion == true){
        return (*funcion)(numero);
    }else if(efectuar_operacion == false){
        return numero;
    }


}
int cuadrado(int numero){
        return numero * numero;
}
int main()
{
        int numero = 5;
        bool efectuar_operacion = true;
        int (*funcion)(int) = &cuadrado;
        int resultado = solucion(numero, efectuar_operacion, funcion);
        printf("El resultado es: %d\n", resultado);
        return 0;
}