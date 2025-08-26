#include<stdio.h>

int maior_aux(int num1, int num2){
    if (num1>num2){
        return num1;
    } else if (num2>num1){
        return num2;
    }
    return 0;
}

void maior(int num1, int num2){
    int r=maior_aux(num1,num2);
    if (r==0){
        printf("Os numero são iguais\n");
    } else {
        printf("%d\n", r);
    }
}