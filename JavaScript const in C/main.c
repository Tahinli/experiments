#include <stdio.h>

int main(void) {
    printf("i_am_const World\n");
    void * const i_am_const;
    *(int*)i_am_const = 123;

    printf("%d\n", *(int*)i_am_const);
    printf("%p\n", i_am_const);

    *(char*)i_am_const = 'A';

    printf("%c\n", *(char*)i_am_const);
    printf("%p\n", i_am_const);
}