#include<stdio.h>

int soma(int, int);

int main(){
    printf("A soma é %d\n", soma(3, 8));
    printf("A soma é %d\n", soma(7, 1));
    printf("A soma é %d\n", soma(4, 9));
    return 0;
}

int soma(int num1, int num2){
    return num1 + num2;
}