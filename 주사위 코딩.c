#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 
    for (int i = 0; i < 10; i++) {
        int dice = rand() % 6 + 1; 
        printf("Roll %d: %d\n", i + 1, dice);
    }
    return 0;
}
