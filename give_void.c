#include <stdio.h>
#include "give_void.h"

void* caracteristica_personal(entrenador_t* entrenador){
    return entrenador->caracteristica;
}
int main()
{
        entrenador_t entrenador;
        entrenador.caracteristica = "soy un entrenador";
        char* caracteristica = caracteristica_personal(&entrenador);
        printf("caracteristica = %s\n", caracteristica);
        return 0;
}