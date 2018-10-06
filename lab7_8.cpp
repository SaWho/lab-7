//to find sum of digits of a number using recursion
#include <iostream>
using namespace std;
int sum(int i)
{
//summing the return values 

	int r=i%10;
	if (i!=0)
		return r+sum(i/10);
	else
		return 0;
}

int main()
{
//variables declaration

	int i;
//user prompt,input and function call

	cout<<"Enter a number whose sum of digits is to be found"<<endl;
	cin>>i;
	cout<<"The required sum is "<<sum(i)<<endl;
	return 0;
}
