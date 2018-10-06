//to print even or odd in given range using recursion
#include <iostream>
using namespace std;
int even(int i,int j)
{
//if the number is even it is printed by recursive function call
	
	int k=i;
	if(i<=j)
	{
		if(k%2==0)
			cout<<k<<endl;
	}
	else 
		return 0;
	i++;
	even(i,j);
}



int odd(int i,int j)
{
//if the number is even it is printed by recursive function call

	int k=i;
	if(i<=j)
	{
		if(k%2!=0)
			cout<<k<<endl;
	}
	else 
		return 0;
	i++;
	odd(i,j);
}

int main()
{
//variables declaration

	int i,j;

//user prompt input and function call

	cout<<"Enter the range for displaying even and odd numbers"<<endl;
	cout <<"Enter the first number"<<endl;
	cin>>i;
	cout<<"Enter the last number"<<endl;
	cin>>j;
	cout <<"The list of even numbers is "<<endl;
	even(i,j);
	cout <<"The list of odd numbers is "<<endl;
	odd(i,j);
}

