#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0

int main() {
    int c, wordCount, state;

    state = OUT;
    wordCount = 0;

    while ((c = getchar()) != EOF) {
        if (!isalpha(c))
            state = OUT;
        else if (state == OUT) {
            wordCount++;
            state = IN;
        }
    }

    printf("%d\n", wordCount);
}
