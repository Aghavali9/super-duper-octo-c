#include <stdio.h>


int main(void){
    FILE *fp;
    char file_name[]= "10000_days.txt"; // sample text file
    char ch;

    fp = fopen(file_name, "r"); // open file in read-only mode

    if (fp == NULL) { // check if file was opened successfully
        printf("Error opening file.");
        return 1;
    }

    do
    {
        /* Read single character from file */
        ch = fgetc(fp);

        /* Print character read on console */
        putchar(ch);

    } while(ch != EOF);

    fclose(fp); // close file when done

    return 0;
}
