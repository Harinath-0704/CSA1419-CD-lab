#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter code: ");
    fgets(str, sizeof(str), stdin);

    if (strncmp(str, "//", 2) == 0) {
        printf("Comment ignored\n");
        return 0;
    }

    while (str[i] != '\0') {
        if (isspace(str[i])) {
            i++;
            continue;
        }
        printf("%c ", str[i]);
        i++;
    }

    return 0;
}
