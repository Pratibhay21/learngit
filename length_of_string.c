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
    return 0;
}