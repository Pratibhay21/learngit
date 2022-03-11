#include<stdio.h>
int main(){
     char *fruits[]={"2 orange","2 apples","3 bananas","1 pineapple"};
     int i=0;
     while(fruits[i]){
         printf("%s\n",fruits[i]);
         i++;
     }


   /* printf(f[0]);;
    printf(f[1]);;
    printf(f[2]);;
    printf(f[3]);;*/
    return 0;
}