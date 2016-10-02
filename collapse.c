#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0

int main() {
    int c, state;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (isspace(c)) {
            if (state == OUT)
                printf(" ");
            else
                state = IN;
        } else {
            printf("%c", c);
            state = OUT;
        }
    }
    printf("\n");
}
