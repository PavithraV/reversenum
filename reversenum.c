#include<stdio.h>
int reverse(int n)
{
		int rev=0;
		printf("enter the number to reverse\n");
		scanf("%d",&n);
		while(n>0)
		{
			rev=rev * 10;
			rev=rev + (n%10);
			n=n/10;
		}
		return rev;
}
int main()
{
	    int n;
	    printf("reversed num=%d",reverse(n));
	    return 0;
}
