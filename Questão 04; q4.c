#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main (int argv, char *argc[]){
    setlocale(LC_ALL, "Portuguese");
    int vet[10] = {1,2,9,40,5,63,17,8,91,10};
    int i;
    int maior = vet[0];
        for(i=1; i<10; i++){
            if(vet[i] > maior){
                maior = vet[i];
            }
        }
                printf("O maior elemento no vetor é: %d", maior);
    return(0);
    system("pause");

}

