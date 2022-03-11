// know ASCII VALUES first
// upper case letters(65-90) are less value than lower case(97-122)
// digits have less value than letters(48-97)
// space character have less than all printing characters(32)

//s1<s2
#include <stdio.h>
#include <string.h>
int main()
{
    char *s1 = "abcd";
    char *s2 = "abce";
    if (strcmp(s1, s2) < 0)
    {
        printf("s1 is less than s2");
    }
    else
    {
        printf("s1 is greater than or equal to s2");
    }

    return 0;
}


//s1<s2
//*s1="abce";
//*s2="bbce";


//s1>s2
//*s1="bace";
//*s2="abce";

//s1=s2
//*s1="abce";
//*s2="bbce";