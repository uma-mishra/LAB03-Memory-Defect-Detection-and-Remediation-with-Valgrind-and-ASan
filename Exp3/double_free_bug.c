#include <stdlib.h>

int main(void) {
    int *ptr = malloc(sizeof(int));

    if (ptr == NULL)
        return 1;

    *ptr = 50;

    free(ptr);
    free(ptr);

    return 0;
}
