#include<stdio.h>
#include<string.h>
int main(){
    
    //priniting using puts()
    char home[6]="Hello"; //not a string literal but can be treated as character array (like normal arrays{can modify characters})
    //as string literal can't be modified but character array can be modified
    puts(home); //prints output of the string and automatically adds new line
    puts(home);

    //printing in different ways
    char *name="India is great";
    printf("%s",name); //printing full string
    printf("\n");
    printf("%.3s\n",name);//printing a part of string specified
     printf("%6.3s\n",name);//adds spaces blocks before the characers

   //string scanf()
   //scanf() doesn't stores white space characters (so use gets() function to read entire line)
   char a[10];
     printf("Enter the string:");
     scanf("%s",a); //no need to put '&' here as here a is treated as pointer to 1st elem of array
     printf("%s",a);

     //proper calls examples
     /*
     printf("%c",'\n');     //will work
     printf("%c","\n");     //won't work
     putchar("\n");         //won't work
     putchar('\n');         //will work
     puts('\n');            //won't work
     puts("\n");            //will work
     printf("%s","\n");     //will work
     printf("%s",'\n');     //won't work

     */
     
    return 0;
}