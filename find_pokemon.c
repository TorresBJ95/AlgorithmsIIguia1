#include <stdio.h>
#include "find_pokemon.h"

pokemon_t* pokemon_buscado(entrenador_t* entrenador, char* nombre_pokemon){
        if(entrenador == NULL || nombre_pokemon == NULL)
                return NULL;
        pokemon_t *poke_devolver = NULL;
        for(int i = 0; i < entrenador->tope; i++){
                if(strcmp(entrenador->pokemones[i].nombre_pokemon, nombre_pokemon) == 0){
                        poke_devolver = &(entrenador->pokemones[i]);
                        return poke_devolver;
                }
        }
    
}
int main()
{
        entrenador_t entrenador;
        pokemon_t pokemon1;
        pokemon_t pokemon2;
        pokemon_t pokemon3;
        pokemon1.nombre_pokemon = "pikachu";
        pokemon2.nombre_pokemon = "charmander";
        pokemon3.nombre_pokemon = "squirtle";
        entrenador.pokemones = malloc(sizeof(pokemon_t)*3);
        entrenador.pokemones[0] = pokemon1;
        entrenador.pokemones[1] = pokemon2;
        entrenador.pokemones[2] = pokemon3;
        entrenador.tope = 3;
        char* nombre_pokemon = "charmander";
        pokemon_t* pokemon = pokemon_buscado(&entrenador, nombre_pokemon);
        printf("pokemon = %s\n", pokemon->nombre_pokemon);
        free(entrenador.pokemones);
        return 0;
}