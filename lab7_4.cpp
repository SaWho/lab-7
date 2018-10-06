//to print sum of n natural numbers
#include <iostream>
using namespace std;
int sum(int n)
{
//condition of termination and sum of terms in recursion till n=0

	if (n==0)
		return 0;
	return n+sum(n-1);
}
int main() 
{
//initialization of variable
	
	int n;

//user prompt and input and final output

	cout<<"Enter the natural number till which the sum is to be made"<<endl;
	cin>>n;
	cout <<"The sum is "<<sum(n)<<endl;
	return 0;

}
