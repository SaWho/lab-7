//to print the revers of a number using recursion
#include <iostream>
using namespace std;
int reverse(int n)
{
//to print the unit places of a number repeatedly after removing the same multiple times
	cout<<n%10;
	if (n>=10)
		reverse(n/10);
	return 0;

}
int main()
{
//variables declaration

	int n;

//user prompt,input and function call

	cout <<"Enter the number to be reversed"<<endl;
	cin>>n;
	reverse(n);
	return 0;
}
