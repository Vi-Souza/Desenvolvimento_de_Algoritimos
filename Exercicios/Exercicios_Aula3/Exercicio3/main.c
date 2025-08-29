#include<stdio.h>
#include"funcoes.h"

int main(){
    int opcao;
    while(1){
        opcao = menu();
        if (opcao == 1){
            printf("%2.f\n", area_circulo());
        } else if (opcao == 2){
            printf("%2.f\n", area_retangulo());
        } else if (opcao == 3){
            printf("%2.f\n", area_triangulo());      
        } else {
            printf("Até logo!\n");  
            break;
        }
    }
    return 0;
}
