#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    free(ptr);
    *ptr = 10;  // Forsøk på å tilgå frigjort minne
    return 0;
}