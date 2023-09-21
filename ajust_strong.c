#include <stdio.h>
#include "ajust_strong.h"

void actualizar_fuerza(pokemon_t* pokemon, float* nueva_fuerza){
        if(*nueva_fuerza >= 0){
                float **fuerza = &(pokemon->fuerza);
                **fuerza = *nueva_fuerza;

        }
        
}
int main()
{
        float fuerza = 250;
        pokemon_t pokemon;
        pokemon.fuerza = &fuerza;
        float nueva_fuerza = 25;
        printf("fuerza = %f, nueva_fuerza = %f\n", *pokemon.fuerza, nueva_fuerza);
        actualizar_fuerza(&pokemon, &nueva_fuerza);
        printf("fuerza = %f, nueva_fuerza = %f\n", *pokemon.fuerza, nueva_fuerza);
        return 0;
}