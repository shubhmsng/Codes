#include<stdio.h>
main( )
{ int b[ ] = { 10, 20, 30, 40, 50 } ; 
int i ; 
for ( i = 0 ; i <= 4 ; i++ ) 
printf ( "\n%d" ,*( b + i ) ) ;
 return 0;
 }