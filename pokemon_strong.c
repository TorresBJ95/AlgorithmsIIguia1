#include <stdio.h>
#include "strong_pokemon.h"
// Ajust the force by the given percentage
void ajustar_fuerza(pokemon_t* pokemon, float porcentaje){

        if(porcentaje >= 0){
                float reduccion_fuerza = (pokemon->fuerza*porcentaje)/100;
                pokemon->fuerza = reduccion_fuerza;
        }
}
int main()
{
        pokemon_t pokemon;
        pokemon.fuerza = 250;
        float porcentaje = 25;
        printf("fuerza = %f, porcentaje = %f\n", pokemon.fuerza, porcentaje);
        ajustar_fuerza(&pokemon, porcentaje);
        printf("fuerza = %f, porcentaje = %f\n", pokemon.fuerza, porcentaje);
        return 0;
}