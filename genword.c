#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0

int main() {
    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF) {
        if (!isalpha(c)) {
            if (state == IN)
                printf("\n");
            state = OUT;
        } else {
            printf("%c", c);
            state = IN;
        }
    }
}
