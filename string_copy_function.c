/*
#include<stdio.h>
#include<string.h>

int main(){

char str1[10]="Hello";
char str2[10];
char str3[10];
printf("%s\n",strcpy(str2,str1)); //prints str2 content
printf("%s\n",str2); //prints str2 content again
strcpy(str3,(strcpy(str2,str1))); //chaining series of strcpy() calls
printf("%s%s\n",str2,str3);
    return 0;
}
*/

//when source and destination are not of same size
#include<stdio.h>
#include<string.h>

int main(){
    char str4[8]="WElcome";
    char str5[4];
    strncpy(str5,str4,sizeof(str5)); //always only destination is modified and not source
    //will show undefined behviour as string is still unterminated so follow below
    str5[sizeof(str5)-1]='\0'; //adding null charcter as strncpy() will leave the string unterminated without the null character
  
    printf("%s",str5);
    return 0;
}