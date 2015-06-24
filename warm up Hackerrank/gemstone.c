#include <stdio.h>
#include <string.h>

int main()
{
    char string[101],i,f;
    int c, count[26][101] = {0},t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {   c=0;
        scanf("%s",string);

        while ( string[c] != '\0' )
        {
            /* Considering characters from 'a' to 'z' only */

            if ( string[c] >= 'a' && string[c] <= 'z' )
                count[string[c]-'a'][i]++;

            c++;
        }
    }

    int g=0;

    for ( c = 0 ; c < 26 ; c++ )
    {
            f=0;
        for(i=0;i<t;i++)
        {
            if(count[c][i]!=0)
                     f++;

        }
        if(f==t)
            g++;
     }
     printf("%d",g);
    return 0;
}
