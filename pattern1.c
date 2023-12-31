//Nested loop (Loop inside another loop)
#include <stdio.h>
void main()
{
	int x,y;
	for(x=1;x<=5;x++)
	{
		for(y=1;y<=4;y++)
		{
			printf("*");
		}
		printf("\n");
	}
}
