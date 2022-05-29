//MARGESORT

#include<stdlib.h>
#include<stdio.h>
 
// Mescla dois subarranjos de arr[].
// O primeiro subarranjo é arr[l..m]
// O segundo subarranjo é arr[m+1..r]
void marge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* criar matrizes temporárias */
    int L[n1], R[n2];
 
    /* Copiar dados para temporário dos arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Mescle as matrizes temporárias de volta em arr[l..r]*/
    i = 0; // Índice inicial do primeiro subarray
    j = 0; // Índice inicial do segundo subarray
    k = l; // Índice inicial de mesclado subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copie os elementos restantes de L[], se houver
       são quaisquer */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copie os elementos restantes de R[], se houver
       são quaisquer */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l é para o índice esquerdo e r é o índice direito do
   sub-matriz de arr a ser classificada */
void margeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Igual a (l+r)/2, mas evita overflow para
        // grandes l e h
        int m = l+(r-l)/2;
 
        // Classificar primeiro e segundo tempo
        margeSort(arr, l, m);
        margeSort(arr, m+1, r);
 
        marge(arr, l, m, r);
    }
}void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main(){
     int n;
     printf("Insira o número de elementos: ");;
     scanf("%d",&n);
     printf("\nInsira os %d Elementos: ",n);
     int a[n];
     for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
     printf("\nOs elementos são: \n");
     printArray(a,n);
     margeSort(a,0,n-1);
     printf("\nOs elementos ordenados: \n");
     printArray(a,n);
     return 0; 
}
