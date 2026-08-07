#include <stdio.h>

int main() {
    char str[200];
    int spaces = 0, newlines = 0, i = 0;

    printf("Enter text: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ')
            spaces++;
        if (str[i] == '\n')
            newlines++;
        i++;
    }

    printf("Spaces = %d\n", spaces);
    printf("New lines = %d\n", newlines);

    return 0;
}
