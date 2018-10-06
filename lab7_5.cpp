//to print hte sum of all even numbers between 1 to n
#include <iostream>
using namespace std;
int even(int i,int j)
{
//the sum of all odd numbers is calculated and returned

	if(i<=j)
	{
		i++;
		if ((i-1)%2==0)
			return i-1+even(i,j);
	else 
		return 0+even(i,j);
	}
	else 
		return 0;
}

int odd(int i,int j)
{
//the sum of all odd numbers is calculated and returned

	if(i<=j)
	{
		i++;
		if ((i-1)%2!=0)
			return i-1+odd(i,j);
	else 
		return 0+odd(i,j);
	}
	else 
		return 0;
}

int main()
{
//variables decalaration
	
	int i,j;

//user prrompt and input and function call

	cout<<"Enter the range for displaying even and odd numbers"<<endl;
	cout <<"Enter the first number"<<endl;
	cin>>i;
	cout<<"Enter the last number"<<endl;
	cin>>j;
	cout <<"The sum of even is " <<even(i,j)<<endl;
	cout <<"The sum of odd is " <<odd(i,j)<<endl;



}
