//To swap two numbers
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	printf("Numbers before swapping:\n a=%d\n b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("Numbers after swapping:\n a=%d\n b=%d\n",a,b);
	
}
	
