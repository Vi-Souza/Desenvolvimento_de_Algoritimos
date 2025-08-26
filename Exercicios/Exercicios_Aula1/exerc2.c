#include<stdio.h>
#include<math.h>

int main(){
    int h, m, s, stotal, srestante;

    printf("Digite as horas de agora: ");
    scanf("%d", &h);

    printf("Digite os minutos de agora: ");
    scanf("%d", &m);

    printf("Digite os segundos de agora: ");
    scanf("%d", &s);

    stotal = (h*3600)+(m*60)+s;
    srestante = 86400-stotal;

    printf("Já se passaram %.1d segundos\n", stotal);
    printf("Ainda faltam %.1d segundos\n", srestante);

    return 0;
}