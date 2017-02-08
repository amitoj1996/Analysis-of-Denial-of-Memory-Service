#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	clock_t tStart = clock();
	struct ele
	{
		char a[128];
	}arra[10000000],arrb[10000000];
	
	long long i;
	long long n=15000000;
	long long index[n];
	
    printf("Calculating the streaming index");
	for(i=0;i<n;i++)
	{
		index[i]=rand()%(n+1-0)+0;
	}
	printf("Performing stream operations");
	for(i=0;i<n;i++)
	{
		arra[index[i]]=arrb[index[i]];
	}
	for(i=0;i<n;i++)
	{
		arrb[index[i]]=arra[index[i]];
	}
	printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	getchar();

	return 0;
}
