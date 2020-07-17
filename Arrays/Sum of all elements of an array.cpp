#include<iostream>
using namespace std;
int main()
{
	int A[100],n,i,sum=0;
	cout<<"Enter number of elements: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+A[i];
	}
	cout<<"Sum of all the elements of an Array: "<<sum;
	return 0;
}
