
#include<stdio.h>
#include<string.h>
int main(){
    char str1[10],str2[100];
    strcpy(str1,"welcome to ");
    strcpy(str2,"our academy");
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}


/*
//if size is misfitting then
#include<stdio.h>
#include<string.h>
int main(){
    char str1[5],str2[100];
    strcpy(str1,"He");
    strcpy(str2,"llo!");
    strncat(str1,str2,sizeof(str1)-strlen(str1)-1); //for accomodation of only fitting size 
    //sizeof(str1)-strlen(str1)-1
    //    5       -2  -1(null character)=2 (only "ll" will be printed)
    printf("%s",str1);
    return 0;
}

*/