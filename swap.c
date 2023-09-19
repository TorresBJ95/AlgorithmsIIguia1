#include <stdio.h>
void swap(int* primer_valor, int* segundo_valor){
        int temp = *primer_valor;
        *primer_valor = *segundo_valor;
        *segundo_valor = temp;
        

    


}

int main()
{
        int a = 5;
        int b = 10;
        printf("a = %d, b = %d\n", a, b);
        swap(&a, &b);
        printf("a = %d, b = %d\n", a, b);
        return 0;
}