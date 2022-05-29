//INSERTION_SORT

#include<stdio.h>

void insertion_sort(int a[],int n){
    int i,j,k,change;
    for(i=1;i<n;i++){
        for(k=0;k<i;k++){
            if(a[i]<a[k]){
                change=a[i];
                for(j=i;j>k;j--){
                    a[j]=a[j-1]; //trocando os dígitos maiores que a[i] para um lugar à direita
                }
                a[k]=change; //enchendo o vetor
                break;

            }

        }
    }
}

int main(){
    int a[10],i, n;
    printf("Insira o número de elementos: \n");
    scanf("%d",&n);
    printf("\nInsira os elementos: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }

    printf("\nAqui está a lista ordenada: ");
    insertion_sort(a,n);
    for(i=0;i<n;i++){
        printf(" %d",a[i]);

    }

}
