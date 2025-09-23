#include<stdio.h>
#include<string.h>

int main(){
    char nome[] = "LUCIANO ";
    char nome2[10];
    char sobrenome[] = "ROSSI";

    strcpy(nome2,nome);
    strcat(nome,sobrenome);

    printf("%s\n", nome);
    printf("%s\n", nome2);

    return 0;
}