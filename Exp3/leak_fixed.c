#include <stdlib.h>

int main(void) {
    int *ptr = malloc(10 * sizeof(int));

    if (ptr == NULL)
        return 1;

    ptr[0] = 100;

    free(ptr);

    return 0;
}
