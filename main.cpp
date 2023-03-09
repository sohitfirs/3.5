/* https://github.com/sohitfirs/3.5.git */

#include <stdio.h>
#include <cstdlib>

main()
{
	int i=1;
	int x=1;
	int y=1;
	int z=5;
	
	while (i<10)
	{
		printf("Hello ");
		i= ++i;
	}
	printf("\n");
	
	while (x<16)
	{
		printf("%i ", x);
		x= ++x;
	}
	printf("\n");
	
	while (y<16)
	{
		printf("%i ", y);
		y= y+2;
	}
	printf("\n");
	
	while (z<16)
	{
		printf("%i ", z);
		z= ++z;
	}
	printf("\n");
	system("pause");
}
