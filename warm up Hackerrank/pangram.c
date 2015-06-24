#include<stdio.h>
#include<string.h>

int plndrm(char s[])
{
    int i=0,c=0,f=0;
    int count[26]={0};
     while ( s[c] != '$')
   {
      /* Considering characters from 'a' to 'z' only */

      if ( s[c] >= 'a' && s[c] <= 'z')
         count[s[c]-'a']++;
        if(s[c] >= 'A' && s[c] <= 'Z')
            count[s[c]-65]++;
      c++;
   }
    for(i=0;i<26;i++)
    {
        if(count[i]==0)
            f=1;
    }
    return f;
}

int main()
{
    int i,l;
    char s[100001],ch;
    for(i=0;ch!='\n';i++){
     ch=getchar();
     s[i]=ch;
     }
     s[i]='$';

   l=plndrm(s);
   if(l==0)
    printf("pangram");
   else
    printf("not pangram");
    return 0;
}
