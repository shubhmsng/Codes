#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char string[52];
        int c = 0, count[26] = {0},k[28] = {0},i,j,p=0;

        scanf("%s",string);
        while ( string[c] != '\0' )
        {
            /* Considering characters from 'a' to 'z' only */

            if ( string[c] >= 'a' && string[c] <= 'z' )
                count[string[c]-'a']++;

            c++;
        }

        for(i=0; i<26; i++)
        {
           int s=0;
            if(count[i]!=0)
            {
                for(j=0; j<26; j++)
                {
                    if(i!=j&&count[j]!=0)
                        s=s+count[j];
                }

                k[i]=s;
            }
        }

        for(i=0;i<26;i++)
        {
            if(k[i]!=0&&(count[i]==k[i]))
            {
              p=1;
              break;
            }
        }
        if(p==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
