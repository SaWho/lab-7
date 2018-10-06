//To print powers of a number usin recursionn
#include <iostream>
using namespace std;

//function for power

int power(int i,int n)
{

//condition for termination

	if (n==0)
		return 1;
	else
	{

//multiplying with the same number till n gets to 1

		n--;
		return i*power(i,n);
	}
}

int main()
{

//declaration of variables

	int i,n;

//user prompt and input

	cout <<"Enter the number to be raised to a power"<<endl;
	cin>>i;
	cout<<"Enter the number to which the number has to be raised"<<endl;
	cin>>n;

//function call

	cout <<"The required answer is "<<power(i,n)<<endl;

}
