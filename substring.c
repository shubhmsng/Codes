#include<stdio.h>
int i=0;
char substr(char c[],int low,int high)
{
    if(low<=high)
    {
        printf("%c",c[low]);

        substr(c,low+1,high);
    }
    else return;
}
int main( )
{   int j,k;
    char c[]="shubhmsng";

    for(j=0;j<9;j++){
    for(k=0;k<9;k++){
    substr(c,j,k);
    printf("\n");
    }
    }
    return 0;
}
