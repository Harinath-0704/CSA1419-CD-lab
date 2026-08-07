#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a statement: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (isspace(str[i])) {
            i++;
        } else if (isalpha(str[i]) || str[i] == '_') {
            printf("%c is an Identifier\n", str[i]);
            i++;
        } else if (isdigit(str[i])) {
            printf("%c is a Constant\n", str[i]);
            i++;
        } else if (strchr("+-*/=%", str[i])) {
            printf("%c is an Operator\n", str[i]);
            i++;
        } else {
            i++;
        }
    }
    return 0;
}
