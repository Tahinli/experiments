#include <time.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

const int GIG = 1024*1024*1024;

int main(void) {
    printf("Hello World\n");
    
    clock_t start_malloc = clock();    
    int* x = malloc(GIG);
    memset(x, 1, GIG);
    clock_t end_malloc = clock();

    printf("Malloc+Memset = %ld\n", end_malloc-start_malloc);

    clock_t free_start_malloc = clock();
    free(x);
    clock_t free_end_malloc = clock();

    printf("Free = %ld\n", free_end_malloc-free_start_malloc);

    clock_t start_calloc = clock();    
    int* y = calloc(1, GIG);
    clock_t end_calloc = clock();

    printf("Calloc = %ld\n", end_calloc-start_calloc);

    clock_t free_start_calloc = clock();
    free(y);
    clock_t free_end_calloc = clock();
    
    printf("Free = %ld\n", free_end_calloc-free_start_calloc);
}