#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n=0,k=0,i,j;
    printf("Vvedite n: ");
    scanf("%d", &n);
    for (i=0; i<=pow(n, 1.0/3.0); i++){
        for (j=0; j<=pow(n, 1.0/3.0); j++){
            if (i*i*i+j*j*j==n)
                   k++;
        }
    }
    if (k>1) k=k/2;
    printf ("%d sposob(ov)\n", k);
    system("pause");
    return 0;
}