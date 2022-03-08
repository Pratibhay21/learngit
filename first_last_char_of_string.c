#include<stdio.h>
#include<string.h>
int main(){
    
//char *str = "A apple a day, keeps a doctor away";      {hard coded}
char *str;
printf("Enter the string:");
gets(str);
int len = strlen(str); 
printf("First: %c, Last: %c\n", str[0], str[len-1]);  //as NULL('\0') is a part of string
    return 0;
}