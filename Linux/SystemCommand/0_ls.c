/*************************************************************************
 @File Name    : 0_ls.c
 @Author       : SangYu
 @Email        : sangyu.code@gmail.com
 @Created Time : Tue May 21 23:29:32 2024
 @Description  : 
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main()
{
    DIR *pDir;
    struct dirent *ptr;
    if (NULL == (pDir = opendir(".")))
    {
        perror("opendir failed");
        exit(EXIT_FAILURE);
    }
    while(NULL != (ptr = readdir(pDir)))
    {
        printf("%s\n", ptr->d_name);
    }
    closedir(pDir);
    return 0;
}
