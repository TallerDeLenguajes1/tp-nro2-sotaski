#include <stdio.h>
#include <stdlib.h>
#define m 15
#define N 15

int main(){

	int M[m][N];
	int vector[m];
	int i,f;
	int n;
	int par=0;
	for (i = 0; i < m;i++)
	{
		n= rand() % 10+ 5;
		for (f=0; f<n; f++)
		{
			M[i][f]= rand() % 899 + 100;
			printf("%d - ", M[i][f]);
			if ( (M[i][f]%2)==0)
			{
				par++;
			}
		}
		printf("\n");
		printf("En la fila %d hay %d numeros pares", i+1, par);
		printf("\n");
		printf("\n");
		vector[i]= par;
		par=0;

		
	}
	printf("\n");
	for (i = 0; i < m; ++i)
	{
		printf("%d-", vector[i]);
	}

	return 0;
}