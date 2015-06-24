#include<stdio.h>
#include<string.h>
#define MAX 10000

int validate(char []);
int modulerDivision(char[],unsigned long);


int main(){

    char dividend[MAX];
    unsigned long int divisor,remainder;

    printf("Enter dividend: ");
    scanf("%s",dividend);
    if(validate(dividend))
         return 0;

    printf("Enter divisor: ");
    scanf("%lu",&divisor);

    remainder = modulerDivision(dividend,divisor);

    printf("Modular division: %s %% %lu  =  %lu",dividend,divisor,remainder);

    return 0;
}

int validate(char num[]){
    int i=0;

    while(num[i]){
         if(num[i] < 48 || num[i]> 57){
             printf("Invalid positive integer: %s",num);
             return 1;
         }
         i++;
    }

    return 0;
}

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
