#include<stdio.h>
#include<string.h>
int main()
{   int i,j=0,k=0,l,m=0,n=0,p,q,r,s,t,u;
    char s1[100001],a,b;
    int c[100001],h[100001],e[100001],f[100001];
    scanf("%s",s1);
    p=strlen(s1);
    for(i=0;i<p;i++)
    {   if(s1[i]=='c')
        {c[j]=i;
         j++;
        }
        if(s1[i]=='h')
        {   h[k]=i;
            k++;
        }
        if(s1[i]=='e')
        {   e[m]=i;
            m++;
        }
        if(s1[i]=='f')
        {   f[n]=i;
            n++;
        }
    }
    scanf("%d",&q);
    while(q--)
    {   scanf("%c",&a);
        scanf("%c",&b);
        printf("a=%c b=%c\n",a,b);
        scanf("%d%d",&l,&r);
        if(a=='c'&&b=='h')
        {       int count=0;
                t=0,i=0;
                 while(h[t]<l)
                    t++;
                while(c[i]<l-1)
                    i++;
                for(s=i;c[i]<r;s++)
                {   for(u=t;h[u]<r;u++)
                        {   if(c[i]<h[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
        else if(a=='c'&&b=='e')
        {       int count=0;
                t=0,i=0;
                 while(e[t]<l)
                    t++;
                while(c[i]<l-1)
                    i++;
                for(s=i;c[i]<r;s++)
                {
                    for(u=t;e[u]<r;u++)
                        {
                            if(c[i]<e[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
        else if(a=='c'&&b=='f')
        {        int count=0;
                t=0,i=0;
                 while(f[t]<l)
                    t++;
                while(c[i]<l-1)
                i++;
                for(s=i;c[i]<r;s++)
                {
                    for(u=t;f[u]<r;u++)
                        {   if(c[i]<f[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
        else if(a=='e'&&b=='c')
        {       int count=0;
                t=0,i=0;
                 while(c[t]<l)
                    t++;
                while(e[i]<l-1)
                    i++;
                for(s=i;e[i]<r;s++)
                {
                    for(u=t;c[u]<r;u++)
                        {
                            if(e[i]<c[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
        else if(a=='e'&&b=='f')
        {       int count=0;
                t=0,i=0;
                 while(f[t]<l)
                    t++;
                while(e[i]<l-1)
                    i++;
                for(s=i;e[i]<r;s++)
                {
                    for(u=t;f[u]<r;u++)
                        {
                            if(e[i]<f[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
        else if(a=='e'&&b=='h')
        {       int count=0;
                t=0,i=0;
                 while(h[t]<l)
                    t++;
                while(e[i]<l-1)
                i++;
                for(s=i;e[i]<r;s++)
                {
                    for(u=t;h[u]<r;u++)
                        {   if(e[i]<h[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
        else if(a=='f'&&b=='c')
        {       int count=0;
                t=0,i=0;
                 while(c[t]<l)
                    t++;
                while(f[i]<l-1)
                    i++;
                for(s=i;f[i]<r;s++)
                {   for(u=t;c[u]<r;u++)
                        {if(f[i]<c[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
        else if(a=='f'&&b=='e')
        {       int count=0;
                t=0,i=0;
                 while(e[t]<l)
                t++;
                while(f[i]<l-1)
                    i++;
                for(s=i;f[i]<r;s++)
                {       for(u=t;e[u]<r;u++)
                        {   if(f[i]<e[u])
                            count++;
                        }
                }
            printf("%d\n",count);
            }
        else if(a=='f'&&b=='h')
        {
            int count=0;
                t=0;
                 while(h[t]<l)
                {
                    t++;
                }
                i=0;
                while(f[i]<l-1)
                {
                    i++;
                }
                for(s=i;f[i]<r;s++)
                {
                    for(u=t;h[u]<r;u++)
                        {
                            if(f[i]<h[u])
                            count++;
                        }
                }
            printf("%d\n",count);

        }
        else if(a=='h'&&b=='c')
        {
            int count=0;
                t=0;
                 while(c[t]<l)
                {
                    t++;
                }
                i=0;
                while(h[i]<l-1)
                {
                    i++;
                }
                for(s=i;h[i]<r;s++)
                {
                    for(u=t;c[u]<r;u++)
                        {
                            if(h[i]<c[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
         else if(a=='h'&&b=='e')
        {   int count=0;
                t=0,i=0;
                 while(e[t]<l)
                    t++;
                while(h[i]<l-1)
                    i++;
                for(s=i;h[i]<r;s++)
                {   for(u=t;e[u]<r;u++)
                        {   if(h[i]<e[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
        else if(a=='h'&&b=='f')
        {       int count=0;
                t=0,i=0;
                 while(f[t]<l)
                    t++;
                while(h[i]<l-1)
                i++;
                for(s=i;h[i]<r;s++)
                {       for(u=t;f[u]<r;u++)
                        {   if(h[i]<f[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
    }
return 0;
}
