#include <stdio.h>
#include "update_victories.h"


void actualizar_victorias(void* entrenador, void* cant_extra){
        entrenador_t* ent = (entrenador_t*) entrenador;
        int *cant = (int*) cant_extra;
        if(ent == NULL || cant == NULL || *cant <= 0)
                return;
        ent->cant_vencidos += *cant;
       

}
int main()
{
        entrenador_t entrenador;
        entrenador.cant_vencidos = 0;
        int cant = 5;
        actualizar_victorias(&entrenador, &cant);
        printf("Cantidad de victorias: %i\n", entrenador.cant_vencidos);
        return 0;
}