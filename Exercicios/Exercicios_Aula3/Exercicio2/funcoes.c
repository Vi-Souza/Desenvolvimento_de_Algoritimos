#include<stdio.h>

float media(float num1,float num2,float num3){
    float m = (num1 + num2 + num3)/3;
    return m;
}

void gera_msg(float num1,float num2,float num3){
    float m = media(num1, num2, num3);
    if (m>=7){
        printf("Aluno Aprovado\n");
    } else if (m>=5){
        printf("Aluno de Recuperação\n");
    } else{
        printf("Aluno Reprovado\n");
    }
}
