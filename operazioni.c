#include <stdio.h>
int main(){
int a,b,AD,SOT,DIV,MOL,RESTO;
printf("inserisci i due interi per fare le 4 moltiplicazioni");
printf("inserisci 1° intero");
scanf(" %d",&a);

printf("inserisci 2° intero");
scanf(" %d",&b);

AD=a+b;
printf("ADDIZIONE: %d\n",AD);

SOT=a-b;
printf("SOTTRAZIONE: %d\n",SOT);

DIV=a/b;
printf("DIVISIONE: %d\n",DIV);

MOL=a*b;
printf("MOLTIPLICAZIONE: %d\n",MOL);

RESTO=a%b;
printf("RESTO: %d\n",RESTO);

return 0;
}