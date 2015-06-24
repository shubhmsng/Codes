#include<stdio.h>
int a[20001];//array will have the capacity to store 200 digits.
int modulerDivision(char dividend[],unsigned long divisor){

    unsigned long temp=0;
    int i=0;

    while(dividend[i]){

         temp = temp*10 + (dividend[i] -48);
         if(temp>=divisor){
             temp = temp % divisor;
         }

         i++;
    }

    return temp;
}

int factorial(int n)
{
    int i,j,temp,m,x;
    a[0]=1;  //initializes array with only 1 digit, the digit 1.
    m=1;    // initializes digit counter
    temp = 0; //Initializes carry variable to 0.
    for(i=1; i<=n; i++)
    {
        for(j=0; j<m; j++)
        {
            x = a[j]*i+temp; //x contains the digit by digit product
            a[j]=x%10; //Contains the digit to store in position j
            temp = x/10; //Contains the carry value that will be stored on later indexes
        }
        while(temp>0) //while loop that will store the carry value on array.
        {
            a[m]=temp%10;
            temp = temp/10;
            m++; // increments digit counter
        }
    }
   // for(i=m-1; i>=0; i--) //printing answer
     //   printf("%d",a[i]);
   // printf("\n");
    return m;
}
int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n,t,k,i,j,l;
    scanf("%d",&t);

    while(t--)
    {
        int max=0,sum,x,diff,y,z,c,d;
       long int b[10001];
        scanf("%d%d",&n,&k);
        int arr[k];
        for(i=0;i<k;i++)
            {
                scanf("%ld",&arr[i]);
                if(arr[i]>max)
                    max=arr[i];
            }

        if(n>11)
        {   j=factorial(n);


            char dividend[10001];
            unsigned long int divisor,remainder;

            for(i=j-1,k=0;k<y,i>=0;i--,k++)
            {
                dividend[k]=a[i]+48;

            }
            divisor=max;

            remainder = modulerDivision(dividend,divisor);

            printf("%lu\n",remainder);
        }
        else
        {
            l=fact(n);
            printf("%d\n",l%max);
        }
    }
return 0;
}
