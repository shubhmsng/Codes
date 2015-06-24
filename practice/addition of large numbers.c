#include<stdio.h>
#include<string.h>
int main(){
    int a[255],b[255],sum[255];
    int ac=0,bc=0,sc=0;
    int reminder = 0,i;
    char num1[255],num2[255],*pa,*pb;
    printf("Enter first number : ");
    scanf("%s",&num1); //taking first number from user in string format
    printf("\nEnter second number : ");
    scanf("%s",&num2); //taking second number from user in string format

    pa = num1; //pointer to first number
    pb = num2; //pointer to second number

    //storing  first string number in the integer array
    while(*pa){  //loop while run untill it get null character
        a[ac++] = *pa++ - 48;  //48 is ASCII value of character zero
    }

    //storing  first string number in the integer array
    while(*pb){
         b[bc++] = *pb++ - 48;
    }

    //additin of two numbers
    if(ac<bc){
         for(i = ac;i > 0;i--){
             sum[sc++]= ((a[i-1] + b[--bc]) + reminder)%10;
             reminder = ((a[i-1] + b[bc]) + reminder)/10;
         }
         while(bc>0){
             sum[sc++] = b[--bc] + reminder;
             reminder = 0;
         }
    }
    else{
         for(i = bc;i > 0;i--){
             sum[sc++]= ((b[i-1] + a[--ac]) + reminder)%10;
            reminder = ((b[i-1] + a[ac]) + reminder)/10;
        }
         if(ac==0 && reminder==1)
             sum[sc++] = reminder;
            while(ac>0){
            sum[sc++] = a[--ac] + reminder;
                reminder = 0;
            }
    }
    printf("Sum of both number is : ");
    for(i=sc-1;i>=0;i--){
         printf("%d",sum[i]);
    }
    return 0;
}
