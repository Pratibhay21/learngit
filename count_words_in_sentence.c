#include<stdio.h>
int main(){
    char sentence[200];
    int i,count=0;
    printf("Enter the sentence:");
    scanf("%[^\n]s",sentence); //reads everthing until \n is encountered(leaving \n unread), for taking multiple words input and put them in sentence
    for(i=0;sentence[i]!='\0';i++){
        if(sentence[i]==' '&& sentence[i+1]!=' ') //to get the exact words number
        {
            count++;
        }
    }
printf("Number of words in the given sentence are:%d",count+1); //as null character isnt noticed ,so add 1  to count to get total words
    return 0;
}