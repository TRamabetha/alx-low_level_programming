#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num_bytes, i;
    char *main_func = (char *)main;

    if (argc != 2) {
        printf("Error\n");
        exit(1);
    }

    num_bytes = atoi(argv[1]);
    if (num_bytes < 0) {
        printf("Error\n");
        exit(2);
    }

    for (i = 0; i < num_bytes; i++)
        printf("%.2x", (unsigned char)main_func[i]);
    printf("\n");

    return (0);
}
