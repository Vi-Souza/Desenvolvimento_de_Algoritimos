#include<stdio.h>
#include"conversoes.h"

float main(){
    printf("Oque deseja calcular?\n");
    printf("Digite 1 para Celsius/Fahrenheit\n");
    printf("Digite 2 para metros/quilômetros\n");
    printf("Digite 3 para segundos/minutos\n");
    int menu;
    scanf("%d", &menu);
    if (menu == 1){
        printf("%.2f\n", Fah(29.6));
    }
    printf("%.2f\n", Fah(29.6));
    
    printf("%.2f\n", Metros(300));

    printf("%.2f\n", Min(200));

    return 0;
}