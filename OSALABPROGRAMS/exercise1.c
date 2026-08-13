#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("current Directory\n");
    system("pwd");
    printf("\n Files\n");
    system("ls-l");
    printf("\n creatin directory\n");
    system("mkdir Demo");
    printf("\n listing files again\n");
    system("ls");
    printf("\nremoving directory\n");
    system("rmdir Demo");
    return 0;

}