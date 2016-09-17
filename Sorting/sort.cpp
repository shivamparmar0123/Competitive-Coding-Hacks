
/*
use inbuit function sort to save time

it will use the most efficient sorting algo by its own
so do not doubt regarding its efficiency

How to Use:

#include<bits/stdc++.h>

using namespace std;

sort ( array_name , array_name + size );

*/



#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[5]= {2,4,3,5,1};
	
	sort(a,a+5);
	
	for(int i=0; i<5; i++)
	{
		printf("%d  ",a[i]);
	}
	
	return 0;
}

//Output : 1 2 3 4 5
