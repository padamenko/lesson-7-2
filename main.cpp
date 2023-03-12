#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int items, int array[100])
{
	srand(time(NULL));
	
	for(int i=0; i<items; i++)
	{
		array[i]=rand()%9+(1);
	}
	for(int i=0; i<items; i++)
	{
		printf("%4i", array[i]);
	}
	printf("\n");
}

main()
{
	int mas[100], mas2[100];
	int n, m;
	printf("Enter the number of items in first mas: ");
	scanf("%i",&n);
	printf("\n");
	printf("Enter the number of items in second mas: ");
	scanf("%i",&m);
	printf("\n");
	fillArray(n,mas);
	fillArray(m,mas2);
}
