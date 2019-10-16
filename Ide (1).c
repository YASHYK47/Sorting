#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  

int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high];  
    int i = (low - 1);  
  
    for (int j = low; j <= high - 1; j++)  
    { 
        if (arr[j] <= pivot)  
        {  
            i++;  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}

void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  int pi = partition(arr, low, high);  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
} 

int main(void){
    int i,A[1000];
    double tt;
    clock_t start,end;
	for (i=0 ; i<1000 ; i++)
	A[i] = rand() % 1000 ;
	start=clock();
	quickSort( A , 0, 1000-1 ) ;
	end=clock();
	tt=((double)(end-start)/CLOCKS_PER_SEC);
	printf("%lf",tt);
	return 0;
}

