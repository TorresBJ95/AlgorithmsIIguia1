#include <stdio.h>
#include <stdlib.h>
/*
 * Se recibe un puntero a un string, y se devuelve el número que este string representa.
 */
int solucion(const char *string_a_convertir) {
        int conversion = atoi(string_a_convertir);
        return conversion;

}
int main()
{
        char *string_a_convertir = "123s4";
        int conversion = solucion(string_a_convertir);
        printf("conversion = %d\n", conversion);
        return 0;
}