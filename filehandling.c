#include <stdio.h>
#include <stdlib.h>

int main() {

    // Create a file#inc
    if(system("touch sample.txt") == 0)
        printf("1. File 'sample.txt' created successfully.\n");
    else
        printf("Failed to create file.\n");

    // Copy the file
    if(system("cp sample.txt copy.txt") == 0)
        printf("2. File copied to 'copy.txt'.\n");
    else
        printf("Failed to copy file.\n");

    // Rename the copied file
    if(system("mv copy.txt newfile.txt") == 0)
        printf("3. File renamed to 'newfile.txt'.\n");
    else
        printf("Failed to rename file.\n");

    // Delete the renamed file
    if(system("rm newfile.txt") == 0)
        printf("4. File 'newfile.txt' deleted successfully.\n");
    else
        printf("Failed to delete file.\n");

    return 0;
}