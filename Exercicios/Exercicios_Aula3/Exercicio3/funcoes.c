#include<stdio.h>

int menu(){
    int opcao;
    while(1){
         printf("===========================================\n");
         printf("1) Calcular área do circulo\n");
         printf("2) Calcular área do retângulo\n");
         printf("3) Calcular área do triângulo\n");
         printf("4) Sair\n");
         printf("===========================================\n");
         printf("\n Digite sua opção: ");
         scanf("%d", &opcao);
         if(opcao >= 1 && opcao <=4){
            return opcao;
         }
         printf("\nValor Inválido\n");
    }    
}

float area_circulo(){
    float raio;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    return 3.1415 * raio * raio;
}

float area_retangulo(){
    float base, altura;
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);
    return base * altura;
}

float area_triangulo(){
    float base, altura;
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);
    return (base * altura)/2;
}

