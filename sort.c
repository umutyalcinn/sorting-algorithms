#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b);
int partition(int a[], int min, int max);
void merge(int* a, int left, int middle, int right);

/*
Helper function to swap elements
*/
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int* gen_random_array(int length, int min, int max){

    int* a = (int*)malloc(sizeof(int) * length);

    srand(time(NULL));   // Initialization, should only be called once.
    for(int i = 0; i < length; ++i){
        int r = min + rand() % (max - min);
        a[i] = r;
    }

    return a;
}

void quickSort(int a[], int low, int high){
    if(low >= high) return;

    int i = partition(a, low, high);

    quickSort(a, low, i - 1);
    quickSort(a, i + 1, high);
}

int partition(int a[], int low, int high){
    //select pivot (last element in this case)
    int pivot = high;

    int newPivotIndex = low;
    for(int i = low; i < high; ++i){
        if(a[i] < a[pivot]){
            swap(&a[i], &a[newPivotIndex]);
            newPivotIndex++;
        }
    }
    swap(&a[pivot], &a[newPivotIndex]);

    return newPivotIndex;
}

void selectionSort(int *a, int size){
    for(int i = 0; i < size; ++i){
        int minIndex = i;
        for(int j = i + 1; j < size; ++j){
            if(a[minIndex] > a[j]){
                minIndex = j;
            }
        }
        swap(&a[i], &a[minIndex]);
    }
}

void bubbleSort(int *a, int size){
    for(int i = 0; i < size - 1; ++i){
        for(int j = 0; j < size - 1 - i; ++j){
            if(a[j] > a[j+1]){
                swap(&a[j], &a[j+1]);
            }
        }
    }
}

void mergeSort(int *a, int left, int right){
    if(left >= right) return;

    int middle = (left + right) / 2;

    mergeSort(a, left, middle);
    mergeSort(a, middle + 1 , right);

    return merge(a, left, middle, right);
}

void merge(int *a, int left, int middle, int right){
    int lIndex = 0, rIndex = 0, aIndex = left;

    int nl = middle - left + 1;
    int nr = right - middle;

    int L[nl];
    int R[nr];

    for(int i = 0; i < nl; ++i){
        L[i] = a[left + i];
    }

    for(int i = 0; i < nr; ++i){
        R[i] = a[middle + 1 + i];
    }

    while(lIndex < nl && rIndex < nr){
        if(L[lIndex] <= R[rIndex]){
            a[aIndex] = L[lIndex];
            lIndex++;
        }
        else{
            a[aIndex] = R[rIndex];
            rIndex++;
        }
        aIndex++;
    }
    while(lIndex < nl){
        a[aIndex] = L[lIndex];
        lIndex++;
        aIndex++;
    }
    while(rIndex < nr){
        a[aIndex] = R[rIndex];
        rIndex++;
        aIndex++;
    }
}

void dump_arr(int a[], int n){
    for(int i = 0; i < n; ++i){
        printf("%d ", a[i]);
    }
    printf("\n");
}
