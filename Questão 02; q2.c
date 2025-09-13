#include<stdio.h>
#include<locale.h>
int main (int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, soma;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &n1, &n2);
    soma = n1 + n2;
    printf("A soma dos dois números é: %d", soma);
   
    return 0;
}
