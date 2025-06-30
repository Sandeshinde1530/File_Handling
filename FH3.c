#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Name[20];

    printf("Enter the file name which you want to create:\n");
    scanf("%[^'\n']s" , Name);

    fd = creat(Name, 0777);
    if(fd == -1)
    {
        printf("Failed to create a file\n");
    }
    else
    {
        printf("File created succesfully with FD : %d\n",fd);
    }

    printf("Enter the file name which you want to create:\n");
    scanf(" %[^'\n']s" , Name);

    fd = creat(Name, 0777);
    if(fd == -1)
    {
        printf("Failed to create a file\n");
    }
    else
    {
        printf("File created succesfully with FD : %d\n",fd);
    }


    return 0;

}