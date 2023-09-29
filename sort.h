#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quickSort(int a[], int low, int high);
void mergeSort(int a[], int low, int high);
void selectionSort(int a[], int size);
void bubbleSort(int a[], int size);
void dump_arr(int a[], int n);
int* gen_random_array(int length, int min, int max);
