//SELECTION_SORT
#include <stdio.h>

void troca(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n){
	int i, j, min_idx;

	// Um por um limite de movimento do subarranjo não classificado
	for (i = 0; i < n-1; i++)
	{
		// Encontre o elemento mínimo na matriz não classificada
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Troque o elemento mínimo encontrado pelo primeiro elemento
		troca(&arr[min_idx], &arr[i]);
	}
}

/* Função para imprimir um array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Programa de driver para testar as funções acima
int main()
{
	int arr[] = {6, 2, 1, 4, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	printf("Matriz ordenada: \n");
	printArray(arr, n);
	return 0;
}

