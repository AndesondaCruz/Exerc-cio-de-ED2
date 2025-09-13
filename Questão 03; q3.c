#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vet[10] = {10,20,30,40,50,60,70,80,90,100};
    float media;
    int i;
    int soma = 0;

    for(i=0; i<10; i++){
        soma = soma + vet[i];
    }
        media = soma/10;
        printf("A média do vetor que armazena 10 números inteiros é %.2f\n", media);

    system("pause");
    return 0;
}