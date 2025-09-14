#include<stdio.h>
#include<locale.h>
#include<stdlib>
int main (){
    
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = 10;

    for(i=9; i>=0; i--){
        printf("%d", vet[i]);
    }
     printf("\n");
    system("pause");
    return 0;

}
