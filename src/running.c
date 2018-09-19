
#include <stdio.h>
void main()
{
	int a;
	scanf("%d", &a);
	if(a % 4 != 0)
		printf("N\n");
	else if(a % 100 == 0 && a % 400 != 0)
		printf("N\n");
	else
		printf("Y\n");
}
