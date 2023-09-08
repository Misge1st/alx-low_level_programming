#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    printf("Last digit: %d\n", rand() % 10);
    return 0;
}

