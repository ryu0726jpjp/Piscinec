#include <stdio.h>
#include "libft.h"

int main() {
    char str[] = "Hello, world!";
    char **words = ft_split(str, " ,");

    if (words) {
        int i = 0;
        while (words[i]) {
            printf("Word %d: %s\n", i + 1, words[i]);
            free(words[i]);
            i++;
        }
        free(words);
    }

    return 0;
}
