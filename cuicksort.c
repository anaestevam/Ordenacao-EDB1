//QUICKSORT

#include<stdio.h>
#include<stdlib.h>

void QuickSort(int A[],int inicio,int end);

int Partition(int A[],int inicio,int end);

int main()
{
    int A[10],n,i;
    printf("Insira o número de elementos: ");
    scanf("%d",&n);
    printf("\nInsira os elementos: ");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    QuickSort(A,0,n-1);
    printf("A lista ordenada é :  ");
    for(i=0;i<n;i++)
        printf("%d  ",A[i]);
    return 0;
}

void QuickSort(int A[],int inicio,int end)
{
    int pIndex;
    if(inicio<end)
    {
        pIndex=Partition(A,inicio,end);
        QuickSort(A,inicio,pIndex-1);
        QuickSort(A,pIndex+1,end);
    }
}

int Partition(int A[],int inicio,int end)
{
    int pivot,i,pIndex,temp,temp2;
    pivot=A[end];
    pIndex=inicio;
    for(i=inicio;i<end;i++)
    {
        if(A[i]<=pivot)
        {
            temp=A[i];
            A[i]=A[pIndex];
            A[pIndex]=temp;
            pIndex=pIndex+1;
        }
    }
    temp2=A[pIndex];
    A[pIndex]=A[end];
    A[end]=temp2;
    return pIndex;
}
