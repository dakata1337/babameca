#include <stdio.h>

int main(void) {
    char file[] = "let a := 5\0";

    char tokens[100];

    for (int i = 0; i < (int)(sizeof(file) / sizeof(file[0])); i++) {
        if (file[i] == '\0') {
            break;
        }

        tokens[i] = file[i];
    }

    printf("%s\n", tokens);

    return 0;
}