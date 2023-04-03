#include <stdio.h>
int main(){
int A,B,C,D;
int diff;

printf(" Digite quatro numeros inteiros:");
scanf("%d%d%d%d", &A,&B,&C,&D );

diff = (A*B)-(C*D);

printf("%d*%d - %d*%d\n",A,B,C,D);
printf("%d", diff);

}