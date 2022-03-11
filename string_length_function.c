#include<stdio.h>
#include<string.h>
int main()
{
    char *str="Hello world";
    //char str[100]="Hello world";   {still output will be same}
    //as strlen() function always calculates the length of string and not the length of the array
    printf("%d",strlen(str)); //strlen() doesnt count null character '\0'

    return 0;
}
