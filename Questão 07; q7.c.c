#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(int argv, char *argc[]){
    setlocale(LC_ALL, "Portuguese");
    int vet[10] = {21, 7, 20, 17, 45, 41, 10, 100, 67, 354};
    int menor = vet[0];
    int i;


        for(i=0; i<10; i++){        
            if(vet[i] < menor){
                menor = vet[i];    
            }
        }
                printf("\nO menor elemento no vetor é: %d\n", menor);
    system ("pause");
    return 0; 

}
