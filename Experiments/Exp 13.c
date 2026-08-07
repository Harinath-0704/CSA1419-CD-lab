#include <stdio.h>
#include <string.h>

int main() {
    char str[20];

    printf("Enter string: ");
    scanf("%s", str);

    if(strcmp(str, "ab") == 0)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
