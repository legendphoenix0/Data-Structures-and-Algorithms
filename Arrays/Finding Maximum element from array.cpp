#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,max;
	cout<<"Enter number of elements: ";
	cin>>n;
	int *A=new int[2*n];
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
	delete []A;
	return 0;
}

