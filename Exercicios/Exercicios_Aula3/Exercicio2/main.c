#include<stdio.h>
#include"funcoes.h"

int main(){
    float nota1, nota2, nota3;
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Sua média é: %.2f\n", media(nota1,nota2,nota3));
    gera_msg(nota1,nota2,nota3);

    return 0;
}