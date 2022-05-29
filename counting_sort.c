//COUNTING_SORT
#include<stdio.h>  
  
int getMax(int a[], int n) {  
   int max = a[0];  
   for(int i = 1; i<n; i++) {  
      if(a[i] > max)  
         max = a[i];  
   }  
   return max; //elemento máximo da matriz  
}  
  
void countSort(int a[], int n) // função para realizar o counting sort  
{  
   int output[n+1];  
   int max = getMax(a, n);  
   int count[max+1]; //criar array de contagem com tamanho[max+1]  
  
  
  for (int i = 0; i <= max; ++i)   
  {  
    count[i] = 0; //Inicialize a matriz de contagem com todos os zeros 
  }  
    
  for (int i = 0; i < n; i++) //Armazenar a contagem de cada elemento  
  {  
    count[a[i]]++;  
  }  
  
   for(int i = 1; i<=max; i++)   
      count[i] += count[i-1]; //encontrar frequência acumulada  
  
  /* Este loop encontrará o índice de cada elemento do array original no array de contagem, e
   coloque os elementos na matriz de saída*/  
  for (int i = n - 1; i >= 0; i--) {  
    output[count[a[i]] - 1] = a[i];  
    count[a[i]]--; // diminuir a contagem para os mesmos números
}  
  
   for(int i = 0; i<n; i++) {  
      a[i] = output[i]; //armazene os elementos ordenados no array principal 
   }  
}  
  
void printArr(int a[], int n) /* função para imprimir o array */  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
  
int main() {  
    int a[] = { 1, 3, 8, 7, 2, 6 };  
    int n = sizeof(a)/sizeof(a[0]);  
    printf("Antes de classificar os elementos da matriz são: \n");  
    printArr(a, n);  
    countSort(a, n);  
    printf("\nDepois de classificar os elementos da matriz são: \n");    
    printArr(a, n);  
    return 0;  
  
}  
