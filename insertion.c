#include <stdio.h>
#include <stdlib.h>
void ordena (int *a, int b)
{
 int i, j, tmp;
  
 for(i = 1; i < b; i++)
 {
  tmp = a[i];
  for(j = i-1; j >= 0 && tmp < a[j]; j--)
  {
   a[j+1] = a[j];
  }
  a[j+1] = tmp;
 }
}

int main()
{
	int n,i;
	scanf("%i",&n);
	int vetor[n];
	for(i=0;i<n;i++)
	{
		scanf("%i",&vetor[i]);
	}
	printf("Antes:\n");
	for(i=0;i<n;i++)
	{
		printf("%i ",vetor[i]);
		if(i==n-1)
		{
			printf("\n");
		}
	}
	ordena(vetor,n);
	printf("Depois:\n");
	for(i=0;i<n;i++)
	{
		printf("%i ",vetor[i]);
	}
	return 0;
}
