#include <stdio.h>
#include <stdlib.h>

int main() {
    // Create a new file
    printf("Creating file...\n");
    system("touch file1.txt");

    // Copy the file
    printf("Copying file...\n");
    system("cp file1.txt file2.txt");

    // Move (rename) the file
    printf("Renaming file...\n");
    system("mv file2.txt renamed_file.txt");

    // Delete the file
    printf("Deleting file...\n");
    system("rm renamed_file.txt");

    // Delete the original file
    printf("Deleting original file...\n");
    system("rm file1.txt");

    printf("All operations completed successfully!\n");
    return 0;
}