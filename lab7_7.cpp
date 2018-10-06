//to check if palindrome by recursion
#include <iostream>
using namespace std;
int palgen(int n,int s)
{
//to calculate the reverse by returning the value instead of printing

	int i=n%10;
	s=s*10+i;
	if (n<10)
		return s;
	else 
		return palgen(n/10,s);
}

int main()
{
//variables declaration

	int n;

//user prompt and input and function call

	cout<<"Enter the number whose palindrome has to be checked"<<endl;
	cin>>n;
	cout<<"The reverse number is "<<palgen(n,0)<<endl;
	if(palgen(n,0)==n)
	cout<<"The number is a palindrome"<<endl;
	else 
	cout<<"The number is not a palindrome"<<endl;
	return 0;
}
