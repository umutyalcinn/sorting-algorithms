#include "sort.h"
#include <stdio.h>
#include <time.h>


void dump_arr(int a[], int n);

void test_selection_sort(){
    clock_t start_clock, end_clock;

    int* a = gen_random_array(1000, 0, 1000);
    int* b = gen_random_array(10000, 0, 1000);
    int* c = gen_random_array(100000, 0, 1000);
    int* d = gen_random_array(150000, 0, 1000);
    int* e = gen_random_array(200000, 0, 1000);

    start_clock = clock();
    selectionSort(a, 1000);
    end_clock = clock();

    printf("count: 1000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    selectionSort(b, 10000);
    end_clock = clock();

    printf("count: 10000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    selectionSort(c, 100000);
    end_clock = clock();

    printf("count: 100000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    selectionSort(d, 150000);
    end_clock = clock();

    printf("count: 150000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    selectionSort(e, 200000);
    end_clock = clock();

    printf("count: 200000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);
}

void test_bubble_sort(){
    clock_t start_clock, end_clock;

    int* a = gen_random_array(1000, 0, 1000);
    int* b = gen_random_array(10000, 0, 1000);
    int* c = gen_random_array(100000, 0, 1000);
    int* d = gen_random_array(150000, 0, 1000);
    int* e = gen_random_array(200000, 0, 1000);

    start_clock = clock();
    bubbleSort(a, 1000);
    end_clock = clock();

    printf("count: 1000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    bubbleSort(b, 10000);
    end_clock = clock();

    printf("count: 10000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    bubbleSort(c, 100000);
    end_clock = clock();

    printf("count: 100000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    bubbleSort(d, 150000);
    end_clock = clock();

    printf("count: 150000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    bubbleSort(e, 200000);
    end_clock = clock();

    printf("count: 200000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);
}

void test_quick_sort(){
    clock_t start_clock, end_clock;

    int* a = gen_random_array(1000, 0, 1000);
    int* b = gen_random_array(10000, 0, 1000);
    int* c = gen_random_array(100000, 0, 1000);
    int* d = gen_random_array(150000, 0, 1000);
    int* e = gen_random_array(200000, 0, 1000);
    int* f = gen_random_array(500000, 0, 1000);
    int* g = gen_random_array(750000, 0, 1000);
    int* h = gen_random_array(1000000, 0, 1000);

    start_clock = clock();
    quickSort(a, 0, 1000);
    end_clock = clock();

    printf("count: 1000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    quickSort(b, 0, 10000);
    end_clock = clock();

    printf("count: 10000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    quickSort(c, 0, 100000);
    end_clock = clock();

    printf("count: 100000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    quickSort(d, 0, 150000);
    end_clock = clock();

    printf("count: 150000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    quickSort(e, 0, 200000);
    end_clock = clock();

    printf("count: 200000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    quickSort(f, 0, 500000);
    end_clock = clock();

    printf("count: 500000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    quickSort(g, 0, 750000);
    end_clock = clock();

    printf("count: 750000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    quickSort(h, 0, 1000000);
    end_clock = clock();

    printf("count: 1000000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);
}

void test_merge_sort(){
    clock_t start_clock, end_clock;

    int* a = gen_random_array(1000, 0, 1000);
    int* b = gen_random_array(10000, 0, 1000);
    int* c = gen_random_array(100000, 0, 1000);
    int* d = gen_random_array(150000, 0, 1000);
    int* e = gen_random_array(200000, 0, 1000);
    int* f = gen_random_array(500000, 0, 1000);
    int* g = gen_random_array(750000, 0, 1000);
    int* h = gen_random_array(1000000, 0, 1000);

    start_clock = clock();
    mergeSort(a, 0, 999);
    end_clock = clock();

    printf("count: 1000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    mergeSort(b, 0, 9999);
    end_clock = clock();

    printf("count: 10000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    mergeSort(c, 0, 99999);
    end_clock = clock();

    printf("count: 100000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    mergeSort(d, 0, 149999);
    end_clock = clock();

    printf("count: 150000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    mergeSort(e, 0, 199999);
    end_clock = clock();

    printf("count: 200000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    mergeSort(f, 0, 499999);
    end_clock = clock();

    printf("count: 500000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    mergeSort(g, 0, 749999);
    end_clock = clock();

    printf("count: 750000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    start_clock = clock();
    mergeSort(h, 0, 999999);
    end_clock = clock();

    printf("count: 1000000 duration: %.8lf\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);
}

int main(int argc, char **argv){

    printf("Quick Sort\n");
    test_quick_sort();

    printf("\n---------------\n");

    printf("Merge Sort\n");
    test_merge_sort();

    printf("\n---------------\n");

    printf("Selection Sort\n\n");
    test_selection_sort();

    printf("\n---------------\n");

    printf("Bubble Sort\n\n");
    test_bubble_sort();

    printf("\n---------------\n");

    return 0;
}
