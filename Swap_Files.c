#include<stdio.h>
main()
{
	int a=10;
	int b=20;
	printf("The values of a and b are : %d %d\n",a,b);
	a=a+b ;
	b=a-b ;
	a=a-b ;
	printf("After Swapping : \n");
	printf("The values of a and b are : %d %d\n",a,b);
	return 0;
}
