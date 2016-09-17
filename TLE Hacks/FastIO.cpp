/*
Fast Input Output

scanf/printf or cin/cout are basically slow and results into TLE

Use the following code for taking inputs....
it will work for positive as well as negative integers

In some case it will reduce the executon time of problem by 10x 
and helps in grabbing a few more points by passing sub-tasks 
*/

#include<iostream>
using namespace std;

//fast I/O function

//for windows
#define GC getchar
/* 
//for linux
#define GC getchar_unlocked 
*/
int scan()	//replace int with long long int for large input values
{
    int n=0,a=1;	//replace int with long long int for large input values
    char c=GC();

    while(c < 48 || c >57) 
    {
        if(c=='-')
        {
            a=-1;
        }
        c=GC();
    }
    while(c>47 && c<58)
    {
        n=(n<<3)+(n<<1)+c-'0';
        c=GC();
    }
    return a*n;
}

int main()
{
	int x;
	int arr[2];
	
	//cin>>x;
	//scanf("%d",&x);
	
	//for taking input 
	x=scan();
	arr[0]=scan();
	//replace the cin and scanf statement in above given format for taking input
	
	return 0;
}

//No need for understanding code...copy - paste and apply
//If you still want to know how is it working ? Ask Google


