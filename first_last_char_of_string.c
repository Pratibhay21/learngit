#include<stdio.h>
#include<string.h>
int main(){
    
//char *str = "A apple a day, keeps a doctor away";      {hard coded}
char *str;
printf("Enter the string:");
gets(str);
int len = strlen(str); 
printf("First: %c, Last: %c\n", str[0], str[len-1]);
    return 0;
}