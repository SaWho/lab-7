//to create the nth fibonacci term
#include <iostream>
using namespace std;
int fibo(int n)
{
//sum of terms of the series till the values reach 0 and 1

	if (n==3||n==2)
		return 1;
	else if(n==1)
		return 0;
	else 
		return fibo(n-1)+fibo(n-2);
}
int main()
{
//variables declaration

	int n;
//user prompt,input and function call

	cout <<"Enter the value of n which is the serial number of the fibonacci series"<<endl;
	cin>>n;
	cout<<"The nth fibonacci number is "<<fibo(n)<<endl;
	return 0;
}
