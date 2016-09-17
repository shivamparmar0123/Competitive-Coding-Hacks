
/*
use hcf function and its defination for finding hcf of two numbers
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n=36;   //let's find all the factor of 36
	int factor;
	
	for(int i=1;i*i<=n;i++)
		{
			if(n%i==0)
			{
				factor=i;
				cout<<factor;
				
				if(n/i!=i)
				{
					factor=n/i;
					cout<<factor;
		    	}
		    }
		}

	
	return 0;
}

//Want to know how it works ??
/*
Loops run for (1 to sqrt(36))
N=36 i=1  we get 36%1 = 0    print 1 and 36
	i=2   we get 36%2 = 0    print 2 and 18  
	i=3   we get 36%3 = 0    print 3 and 12
	i=4   we get 36%4 = 0    print 4 and 9
	i=5   we get 36%5 = 1    Nothing
	i=6   we get 36%6 = 0    print 6
*/
