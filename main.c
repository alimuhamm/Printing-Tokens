//code by Ali Muhammad ,Enjoy <3 .
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];

    scanf("%[^\n]",s);

    for (int i =0;i<strlen(s);i++)
    {
        char space=s[i];
        if(space==' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",space);
        }
    }
}


