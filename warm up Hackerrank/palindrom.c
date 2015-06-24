#include<stdio.h>

#include<string.h>
void strrev1(char s[]) {
	int c, i , j;
	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	return;
}
int plndrm(char a[])
{
     char  b[100006];
    strcpy(b,a);
    strrev1(b);

   if( strcmp(a,b) == 0 )
      return 1;
   else
      return 0;

}
int plndrm1(char a[],int l)
{   int i,len,p;
    char b[100006];
    len=strlen(a);
    for(i=0;i<l;i++)
        b[i]=a[i];
    for(i=l+1;i<len;i++)
        b[i-1]=a[i];
    p=plndrm(b);
    return p;

}
int main()
{
    int t,l,f,i;
    scanf("%d",&t);
    while(t--)
    {
        char a[100006];
        scanf("%s",a);
        if(plndrm(a))
                printf("-1\n");
        else
        {
            l=strlen(a);
            for(i=0;i<l;i++)
            {
               if(plndrm1(a,i))
               {
                   printf("%d\n",i);
                   break;
               }
            }
        }
    }
    return 0;
}
