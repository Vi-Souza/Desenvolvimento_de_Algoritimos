#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inverte_sting(char *s){
    char *inicio=s;
    char *fim = s+ strlen(s)-1;
    char tmp;
    while (inicio<fim){
        tmp=*inicio;
        *inicio=*fim;
        *fim=tmp;
        inicio++;
        fim--;
    }
}

int main(){
    char s[]="abobora";
    printf("%s\n", s);
    inverte_sting(s);
    printf("%s\n", s);
    return 0;
}