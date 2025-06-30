#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char Name[30];
    char Arr[30] = { '\0'};
    char Brr[30] = { '\0'};
    int fd = 0;
    int iRet = 0;
    printf("ENter the file name to Opne : \n");
    scanf("%[^'\n']s", Name);

    
    fd = open(Name, O_RDONLY);
    
    lseek(fd , 5 , 0);
    read(fd , Arr , 10);
    printf("Data from the file is : %s\n",Arr);
    
    lseek(fd , 5 , 1);
    read(fd , Brr , 10);
    printf("Data from the file is : %s\n",Brr);

    close(fd);
    return 0;
}