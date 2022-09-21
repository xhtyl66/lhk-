#include <stdio.h>
int main()
{
	//while—≠ª∑ 
	int i,p;
	i=1;
	p=0;
	while (i<=100)
	{
		p=p+i;
		i=i+1;
	}
	printf("%d\n",p);
	
	//for—≠ª∑
	int a,b=0;
	for(a=1;a<=100;a++)
	b=b+a;
	printf("%d\n",b); 
	return 0;
}
