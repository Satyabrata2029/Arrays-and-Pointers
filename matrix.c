#include<stdio.h>
main()
{
	int element[3][3];
	int i, j;
	printf("Input elements of the matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nElement[%d][%d]: ", i, j);
			scanf("%d", &(*(*(element+i)+j)));
		}
	}
	printf("\nThe Matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t", *(*(element+i)+j));
		}
		printf("\n");
	}
	return 0;
}
