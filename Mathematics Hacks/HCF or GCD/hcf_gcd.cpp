/*
use hcf function and its defination for finding hcf of two numbers
*/

#include<bits/stdc++.h>
using namespace std;


int hcf(int a,int b)
{
	if(b==0)
	return a;
	else
	return hcf(b,a%b);
}

int main()
{
	//Program to fing HCF of 15 and 25
	
	int result=hcf(15,25);
	
	printf("%d",result);
	
	return 0;
}

//Want to know how it works ??
//DO IT YOURSELF :P
