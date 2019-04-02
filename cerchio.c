#include <stdio.h>
#include <math.h>
int main(){
int C,S,r;
double pi=3.14;
printf("dammi il raggio:");
scanf("%d",&r);

C=2*pi*r;
S=r*r*pi;

printf("la circonferenza è: %d\n",C);
printf("la superficie è: %d",S);
return 0;


}