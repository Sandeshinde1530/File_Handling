#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char Name[30];
    printf("ENter the file name to delete : \n");
    scanf("%[^'\n']s", Name);

    unlink(Name);

    return 0;
}