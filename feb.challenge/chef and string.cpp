#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{   int i,j=1,k=1,l,m=1,n=1,p,q,r,s,t,u,w,cnt=0;
    char s1[100001],a,b;
    int c[100001]={0},h[100001]={0},e[100001]={0},f[100001]={0};
    scanf("%s",s1);
    p=strlen(s1);
    for(i=0;i<p;i++)
    {   if(s1[i]=='c')
        {   c[j]=i+1;
            j++;
        }
        if(s1[i]=='h')
        {   h[k]=i+1;
            k++;
        }
        if(s1[i]=='e')
        {   e[m]=i+1;
            m++;
        }
        if(s1[i]=='f')
        {   f[n]=i+1;
            n++;
        }
    }
c[j]=0;h[k]=0;e[m]=0;f[n]=0;
scanf("%d",&q);
    while(q--)
    {   cin>>a>>b;
       // printf("a=%c b=%c\n",a,b);
        scanf("%d%d",&l,&r);
        //printf("l=%d,r=%d",l,r);
        if(a=='c'&&b=='h')
        {       int count=0,v=0,x;
                t=1,i=1,cnt=0;
                 while(h[t]<l)
                    t++;
                while(c[i]<l)
                    i++;
                w=t;
                x=t;
                while(h[w]<r)
                    {   w++;
                        cnt++;
                    }
                for(s=i;c[s]!=0;s++)
                {
                     if(c[s]>r)
                        break;
                        v=0;
                        t=x;
                           while(c[s]>h[t])
                           {    v++;
                                t++;
                           }
                        //    printf("count=%d u=%d s=%d ",count,u,s);
                    count=count+(cnt-v);

                   }
            printf("%d\n",count);
        }
        else if(a=='c'&&b=='e')
        {       int count=0;
                t=1,i=1;
                 while(e[t]<l)
                    t++;
                while(c[i]<l)
                    i++;
                for(s=i;c[s]!=0;s++)
                {    if(c[s]>r)
                        break;
                    for(u=t;e[u]!=0;u++)
                        {   if(e[u]>r)
                            break;
                            if(c[s]<e[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
        else if(a=='c'&&b=='f')
        {        int count=0;
                t=1,i=1;
                 while(f[t]<l)
                    t++;
                while(c[i]<l)
                i++;
                for(s=i;c[s]!=0;s++)
                {       if(c[s]>r)
                          break;
                    for(u=t;f[u]!=0;u++)
                        {   if(f[u]>r)
                            break;
                            if(c[s]<f[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
        else if(a=='e'&&b=='c')
        {       int count=0;
                t=1,i=1;
                 while(c[t]<l)
                    t++;
                while(e[i]<l)
                    i++;
                for(s=i;e[s]!=0;s++)
                {     if(e[s]>r)
                        break;
                    for(u=t;c[u]!=0;u++)
                        {   if(c[u]>r)
                                break;
                            if(e[s]<c[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
        else if(a=='e'&&b=='f')
        {       int count=0;
                t=1,i=1;
                 while(f[t]<l)
                    t++;
                while(e[i]<l)
                    i++;
                for(s=i;e[s]!=0;s++)
                {    if(e[s]>r)
                        break;
                    for(u=t;f[u]!=0;u++)
                        {   if(f[u]>r)
                            break;
                            if(e[s]<f[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
        else if(a=='e'&&b=='h')
        {       int count=0;
                t=1,i=1;
                 while(h[t]<l)
                    t++;
                while(e[i]<l)
                i++;
                for(s=i;e[s]!=0;s++)
                {       if(e[s]>r)
                            break;
                    for(u=t;h[u]!=0;u++)
                        {   if(h[u]>r)
                                break;
                            if(e[s]<h[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
        else if(a=='f'&&b=='c')
        {       int count=0;
                t=1,i=1;
                 while(c[t]<l)
                    t++;
                while(f[i]<l)
                    i++;
                for(s=i;f[s]!=0;s++)
                {       if(f[s]>r)
                            break;
                    for(u=t;c[u]!=0;u++)
                        {   if(c[u]>r)
                            if(f[s]<c[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
        else if(a=='f'&&b=='e')
        {       int count=0;
                t=1,i=1;
                 while(e[t]<l)
                t++;
                while(f[i]<l)
                    i++;
                for(s=i;f[s]!=0;s++)
                {       if(f[s]>r)
                            break;
                    for(u=t;e[u]!=0;u++)
                        {   if(e[u]>r)
                            break;
                            if(f[s]<e[u])
                            count++;
                        }
                }
            printf("%d\n",count);
            }
        else if(a=='f'&&b=='h')
        {
            int count=0;
                i=1,t=1;
                 while(h[t]<l)
                {
                    t++;
                }
                while(f[i]<l)
                {
                    i++;
                }
                for(s=i;f[s]!=0;s++)
                {       if(f[s]>r)
                            break;
                    for(u=t;h[u]!=0;u++)
                        {   if(h[u]>r)
                                break;
                            if(f[s]<h[u])
                            count++;
                        }
                }
            printf("%d\n",count);

        }
        else if(a=='h'&&b=='c')
        {
            int count=0;
                t=1,i=1;
                 while(c[t]<l)
                {
                    t++;
                }
                while(h[i]<l)
                {
                    i++;
                }
                for(s=i;h[s]!=0;s++)
                {    if(h[s]>r)
                        break;
                    for(u=t;c[u]!=0;u++)
                        {    if(c[u]>r)
                                break;
                            if(h[s]<c[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
         else if(a=='h'&&b=='e')
        {   int count=0;
                t=1,i=1;
                 while(e[t]<l)
                    t++;
                while(h[i]<l)
                    i++;
                for(s=i;h[s]!=0;s++)
                {       if(h[s]>r)
                            break;
                     for(u=t;e[u]!=0;u++)
                        {   if(e[u]>r)
                                break;
                            if(h[s]<e[u])
                            count++;
                        }
                }
            printf("%d\n",count);
        }
        else if(a=='h'&&b=='f')
        {       int count=0;
                t=1,i=1;
                 while(f[t]<l)
                    t++;
                while(h[i]<l)
                i++;
                for(s=i;h[s]!=0;s++)
                {       if(h[s]>r)
                            break;
                    for(u=t;f[u]!=0;u++)
                        {   if(f[u]>r)
                            break;
                            if(h[s]<f[u])
                            count++;

                        }
          }
          printf("%d ",count);
        }
    }
return 0;
}
