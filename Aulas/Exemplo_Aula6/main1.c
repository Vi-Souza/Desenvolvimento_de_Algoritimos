#include<stdio.h>

int main(){
    char nome[] = "LUCIANO";
    char nome2[] = {'L','U','C','I','A','N','O','\0'};
    char nome3[7];

    printf("%s\n", nome);
    printf("%s\n", nome2);

    scanf("%s",nome3);
    printf("%s\n", nome3);

    return 0;
}