#include<stdio.h>
#include<math.h>

int main(){
    float nf, lab1, lab2, lab3, lab, pj, pv;

    printf("Digite a nota do laboratório 1: ");
    scanf("%f", &lab1);

    printf("Digite a nota do laboratório 2: ");
    scanf("%f", &lab2);

    printf("Digite a nota do laboratório 3: ");
    scanf("%f", &lab3);

    printf("Digite a nota do projeto: ");

    scanf("%f", &pj);

    printf("Digite a nota da prova final: ");

    scanf("%f", &pv);

    lab = (lab1+lab2+lab3) / 3;

    nf = (0.2*lab)+(0.8*sqrt(pj*pv));

    printf("A sua nota final é: %.1f\n", nf);

    return 0;
}