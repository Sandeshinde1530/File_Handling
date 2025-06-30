#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Name[30] = {'\0'};
    char Data[20] = {'\0'};

    printf("Enter the file name that you want to open: \n");
    scanf("%[^'\n']s" , Name);

    fd = open(Name , O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("FIle opened successfully with FD : %d\n",fd);

        printf("Enter the data that you want to write in that file \n");
        scanf(" %[^'\n']s" , Data);


        iRet = write(fd ,Data , sizeof(Data));
        printf("%d bytes written succesfully\n",iRet);
    }

    return 0;
}