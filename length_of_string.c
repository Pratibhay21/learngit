#include<stdio.h>
int main(){
    char a[50];
    int i;
    printf("\nEnter college name :");
    gets(a);
    i=0;

    while(a[i]!='\0'){
        i++;
    }
    printf("\n College name is :%d",i);
    printf("%s","\n you have to dream before your dream can come true.\ --A.P.J. Abdul Kalam"); //string splicing concept "\" "
    return 0;
}