// to print all natural numbers from 1 to n
#include <iostream>
using namespace std;
int natural(int n,int i)
{

//condition for termination and function call

	if (i<=n)
	{
		cout <<i++<<endl;
		natural(n,i);
	}
	return 0;

} 

int main()
{

//variable declaration

	int i=1,n;

//user prompt input and function call

	cout <<"Enter the natural number till you want to print"<<endl;
	cin>>n;
	natural(n,i);
	return 0;

}
