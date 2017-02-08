#include<stdio.h>
#include<time.h>

int main()
{
	clock_t tStart = clock();
	
	struct ele
	{
		char a[128];
	}arra[10000000],arrb[10000000];
	long long i;
	long long n=10000000;
	long long index[n];
	
	for(i=0;i<n;i++)
	{
		index[i]=i;
	}
	
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
