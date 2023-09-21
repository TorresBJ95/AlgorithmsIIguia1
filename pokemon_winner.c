#include <stdio.h>
#include "pokemon_winner.h"

pokemon_t* pokemon_mas_victorioso(pokemon_t* poke1, pokemon_t* poke2, 
pokemon_t* (*funciones_batallas[MAX])(pokemon_t*, pokemon_t*), 
int tope) {
        if(poke1 == NULL || poke2 == NULL || funciones_batallas == NULL || tope < 0){
                return NULL;
        }
        int contador_1 = 0;
        int contador_2 = 0;
        for(int i = 0; i < tope; i++){
                pokemon_t *ganador = funciones_batallas[i](poke1, poke2);
                if(ganador == poke1){
                        contador_1++;
                }else if(ganador == poke2){
                        contador_2++;
                }

        }

        return (contador_1 > contador_2) ? poke1 : poke2;
}

