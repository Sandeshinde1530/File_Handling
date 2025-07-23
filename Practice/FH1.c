#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Name[30];
    char Arr[30];
    char Brr[30];
    int iRet = 0;

    printf("Enter the name of file to Delete:\n");
    scanf("%[^'\n']s" , &Name);

    // fd = creat(Name , 0777);

    // if( fd == -1)
    // {
    //     printf("Unable to create file\n"); 
    // }
    // else
    // {
    //     printf("File created succefullly\n");
    // }

    // fd = open(Name , O_RDWR | O_APPEND | O_CREAT , 0777);
    unlink(Name);
    // fd = open(Name , O_RDONLY);
    //  if( fd == -1)
    // {
    //     printf("Unable to Open file\n"); 
    // }
    // else
    // {
    //     printf("File Opened succefullly\n");

        // printf("Enter the data to write in file:\n");
        // scanf(" %[^'\n']s" , Arr);
        
        // iRet = write(fd , Arr , 10);
        // printf("%d bytes written succesfully\n",iRet);
        
        
        // lseek(fd , 5 , 0);
        // iRet = read(fd , Arr , 10);
        // printf("%d bytes Read succesfully\n",iRet);
        // Arr[iRet] = '\0';
        // printf("%s\n",Arr);
        
        // lseek(fd , 0 , 1);
        // iRet = read(fd , Brr , 10);
        // printf("%d bytes Read succesfully\n",iRet);
        // Brr[iRet] = '\0';
        // printf("%s\n",Brr);
        
        // lseek(fd , -10 , 2);
        // iRet = read(fd , Brr , 10);
        // printf("%d bytes Read succesfully\n",iRet);
        // Brr[iRet] = '\0';
        // printf("%s\n",Brr);
        // iRet = read(fd , Arr , 10);
        // printf("%d bytes Read succesfully\n",iRet);
        // Arr[iRet] = '\0';
        // printf("%s\n",Arr);
        
        // iRet = read(fd , Arr , 10);
        // write(1 , Arr , iRet);
        
        
    // }
    
    
    // close(fd);

    return 0;
}