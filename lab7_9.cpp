//to find factorial using recursion
#include <iostream>
using  namespace std;
int fact(int n)
{
//multiply the different terms of the recursion

	if (n==0)
		return 1;
	else 
		return n*fact(n-1);

}

int main()
{
//variable declaration

	int n;

//user prompt,input and functon call

	cout<<"Enter the number whose factorial is to be found"<<endl;
	cin>>n;
	cout<<"The factorial is "<<fact(n)<<endl;
	return 0;

}
