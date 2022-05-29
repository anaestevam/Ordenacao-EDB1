//BUBBLESORT

#include <stdio.h>

void bubblesort(int A[], int n){
    int k, i, flag, temp;
    for (k = 1; k < n; ++k)
    {
        flag = 0;
        for (i = 0; i < (n - k); ++i)
        {
            if (A[i] > A[i + 1])
            {
                temp = A[i + 1];
                A[i + 1] = A[i];
                A[i] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
            break;
     }
}
int main()
{
    int a[10],i, n;
    printf("Insira o número de elementos: \n");
    scanf("%d",&n);
    printf("\nInsira os elementos: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }

    printf("\nAqui está a lista ordenada: ");
    bubblesort(a,n);
    for(i=0;i<n;i++){
        printf(" %d",a[i]);

    }

}
