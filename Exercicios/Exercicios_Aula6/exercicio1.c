#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int conta_caracteres(char *s, char c){
    int count = 0, tam = strlen(s), i=0;
    while(i < tam){
        if(s[i] == c)
            count++;
        i++;
    }
    return count;
}

int main(){
    int x = conta_caracteres("o rato roeu a roupa", ' '); 
    printf("%d\n", x);
    
    return 0;
}