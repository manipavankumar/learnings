#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *p = NULL; // 'p' is a file pointer; 'FILE' is a structure type defined in <stdio.h>
    int ch;
    p = fopen("Mybio.txt", "w");
    // Attempt to open the file "Mybio.txt" in write mode
    if(p == NULL) {
        printf("Error in opening file\n");
        exit(1);
    }

    printf("Enter text (Press Ctrl+c to end input):\n");

    // Read characters from standard input until EOF and write them to the file
    while ((ch = getchar()) != EOF) {
        fputc(ch, p);
    }

    // Close the file
    fclose(p);

    return 0;
}
