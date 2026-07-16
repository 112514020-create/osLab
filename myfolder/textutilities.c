#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;

    do
    {
        printf("\n===== TEXT PROCESSING UTILITIES =====\n");
        printf("1. Display File (cat)\n");
        printf("2. Search Text (grep)\n");
        printf("3. Sort File (sort)\n");
        printf("4. Compare Files (diff)\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                system("cat sample.txt");
                break;

            case 2:
                system("grep hello sample.txt");
                break;

            case 3:
                system("sort sample.txt");
                break;

            case 4:
                system("diff file1.txt file2.txt");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}