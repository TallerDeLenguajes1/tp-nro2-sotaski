#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 5


int main(){
 int f,c;
 double *punt;

 double mt[N][M];
 
  for(f = 0;f<N; f++)
 {
 	for(c = 0;c<M; c++)
 	{
	 printf("ingrese un numero de %d en %d \n", f+1, c+1);
	 scanf("%lf", &mt[f][c]);
	 
 	}
 }

 printf("--------------\n");

 for(f = 0;f<N; f++)
 {
 	for(c = 0;c<M; c++)
 	{
 	punt= &mt[f][c];
	 printf("%.2lf - ", *punt);
 	}
 	printf("\n");
 }
	return 0;
}