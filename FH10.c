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

    read(fd , Arr , 8);
    printf("Data from the file is : %s\n",Arr);

    read(fd ,Brr , 8);
    printf("Data from the file is : %s\n",Brr);    

    return 0;
}