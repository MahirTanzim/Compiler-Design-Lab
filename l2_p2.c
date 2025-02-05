#include <stdio.h>
#include <string.h>

int main() {
    char s[100], *token;
    printf("Enter a string: ");
    gets(s);

    token = strtok(s, " \n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " \n");
    }

    return 0;
}
