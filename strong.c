#include <stdio.h>

// Ajust the force by the given percentage
void ajustar_fuerza(float* fuerza, float porcentaje){
    if(porcentaje > 0){
        float reduccion_fuerza = (*fuerza*porcentaje)/100;
        *fuerza -= reduccion_fuerza;
    }
}

int main()
{
        float fuerza = 250;
        float porcentaje = 25;
        printf("fuerza = %f, porcentaje = %f\n", fuerza, porcentaje);
        ajustar_fuerza(&fuerza, porcentaje);
        printf("fuerza = %f, porcentaje = %f\n", fuerza, porcentaje);
        return 0;
}