#include<stdio.h>
#include<sys/stat.h>
int main(){
    int result;
    result=mkdir("myfolder",0777);
    if(result==0)
    printf("folder is created successfully.\n");
    else
    printf("missing operand.\n");
    return 0;
}