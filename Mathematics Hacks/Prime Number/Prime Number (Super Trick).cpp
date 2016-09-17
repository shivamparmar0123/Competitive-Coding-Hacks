#include<bits/stdc++.h>
using namespace std;

isprime(int);

int main()

{
	int i;
	int n;
	scanf("%d",&n);
	
	printf("2 3 5 ");
	
	
	for (i=7;i<=n;i=i+30 )
	{
		isprime(i);
		isprime(i+4);
		isprime(i+6);
		isprime(i+10);
		isprime(i+12);
		isprime(i+16);
		isprime(i+22);
		isprime(i+24);
	}
	
	return 0;
}

isprime(int x)
{
	int count=0;
	
	if(x%2==0)
	return;
	
		for(int i=3;i<=sqrt(x);i+=2)
		{
			if(x%i==0)
			{
				count++;
				if(count==2)
				return;
			}
		}
	printf("%d ",x);
	
	return;
}
