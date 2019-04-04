#include <stdio.h>
int main(){
int num,s,c1,c2,c3;

printf("dammi un numero di 3 cifre");
scanf("%d",&num);

if(num<1 || num>999){
printf("riprova immettendo un numero di 3 cifre o maggiore di 0!!!\n");
}
else{
c1=num%10;
num=num/10;
c2=num%10;
num=num/10;
c3=num%10;

s=c1+c2+c3;

printf("la somma è %d",s);
}
return 0;

}