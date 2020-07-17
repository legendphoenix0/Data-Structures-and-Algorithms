#include<iostream>
using namespace std;
int main()
{
	int A[100],n,i,max;
	cout<<"Enter number of elements: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	max=A[0];
	for(i=0;i<n;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
	}
	cout<<"Maximum element from array is: "<<max;
	return 0;
}
	
