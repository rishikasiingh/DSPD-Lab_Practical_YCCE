/*
Write a C program that copies the contents of one file to a
destination file. This program will read data from one file ("input.txt")
and copy them to another ("output.txt").
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source_file, *dest_file;
    char *source_filename = "input.txt";
    char *dest_filename = "output.txt";
    int c;

    source_file = fopen(source_filename, "r");
    if (source_file == NULL) {
        printf("Error: Could not open source file %s\n", source_filename);
        exit(1);
    }

    dest_file = fopen(dest_filename, "w");
    if (dest_file == NULL) {
        printf("Error: Could not create destination file %s\n", dest_filename);
        fclose(source_file);
        exit(1);
    }

    while ((c = fgetc(source_file)) != EOF) {
        fputc(c, dest_file);
    }

    printf("Contents successfully copied from %s to %s.\n", source_filename, dest_filename);

    fclose(source_file);
    fclose(dest_file);

    return 0;
}

/*
Sample Execution:

(First, create 'input.txt' with the content:
Hello world
This is a test file.
)

After running the program:

Sample Output:
Contents successfully copied from input.txt to output.txt.

(This will create a new file 'output.txt' with the exact same content
as 'input.txt'.)
*/
