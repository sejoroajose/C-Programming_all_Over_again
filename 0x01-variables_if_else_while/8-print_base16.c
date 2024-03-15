#include <stdio.h>

int main(void) {
    int i = 0;
    
    while (i < 10) {
        putchar('0' + i);
        i++;
    }
    
    i = 0;
    while (i < 6) {
        putchar('a' + i);
        i++;
    }
    
    putchar('\n');
    return 0;
}

