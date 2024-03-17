#include <stdlib.h>

int main() {
    while (1) {
        int *ptr = malloc(sizeof(int)); // Aldri frigjort, forårsaker minnelekkasje
        // Gjør noe med ptr...
    }
    return 0;
}