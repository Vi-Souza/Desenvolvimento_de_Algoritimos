#include<stdio.h>
#include"numeros.h"

int main(){
    printf("%d\n", eh_par(3));
    printf("%d\n", eh_par(4));
    printf("%d\n", eh_primo(7));
    printf("%d\n", eh_primo(6));

    printf("%d\n", calc_fat(4));
    printf("%d\n", calc_fat(6));

    printf("%d\n", maior(3,2));
    printf("%d\n", maior(3,7));

    printf("%d\n", calc_pot(2,3));
    printf("%d\n", calc_pot(3,4));

    return 0;
}