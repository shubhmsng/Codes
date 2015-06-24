#include<stdio.h>
int arr[100001];
int primeFactors()
{   int l,m=0,num;

    for(l=2;l<=10000;l++)
    {
        int i=1,j,k,c=0;
         num=l;
      while(i<=num){
      k=0;
      if(num%i==0){
         j=1;
          while(j<=i){
            if(i%j==0)
                 k++;
             j++;
          }
          if(k==2)
            {
              c++;
            }
      }
      i++;
  }
  arr[m]=c;
  m++;
  }
}

int main()
{   int i,t,m,n,k,l,x,y;
     primeFactors();
    scanf("%d",&t);
    while(t--)
    {   int c=0;
        scanf("%d%d%d",&x,&y,&n);
        for(i=x;i<=y;i++)
        {
               if(arr[i]==n)
                c++;
        }
        printf("%d\n",c);
    }
  return 0;

}
