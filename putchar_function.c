#include<stdio.h>
int main(){
    int ch;
    for(ch='A';ch<='Z';ch++){
        putchar(ch); //prints A-Z characters
        printf("\t");
    }
    printf("\n");
   
    return 0;
}