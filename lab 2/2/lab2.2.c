#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
int main()  
{  
 float a, b, c; 
  printf("vvedite peremennyiu a "); 
  scanf("%f",&a); 
  printf("vvedite peremennyiu b "); 
  scanf("%f",&b); 
  printf("vvedite peremennyiu c "); 
  scanf("%f",&c); 
  if (a==-b || -a==b) 
printf("A i B vzaimno protivipolozhni\n"); 
else if(a==-c || -a==c) 
printf("A i C vzaimno protivipolozhni\n"); 
else if(b==-c || c==-b) 
printf("B i C vzaimno protivipolozhni\n"); 
else if(a==b || b==c || c==a)
printf("Vse chisla odinakovi\n");
else  
printf ("Net vzaimno protivopolozhnih chisel\n");
system("pause");
return 0; 
}