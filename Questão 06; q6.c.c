#include<stdio.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int vet[10] = {23,43,3,4,50,6,7,8,998,10};
    int i, pares = 0;

        for(i=0; i<10; i++){
            if (vet[i] % 2 == 0){
                pares++;
            }
        }
            printf("Os n�meros inteiros pares no vetor �: %d\n", pares);
    system("pause");
    return 0;
}