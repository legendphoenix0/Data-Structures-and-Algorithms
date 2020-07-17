#include<iostream>
using namespace std;
int main()
{
	int A[100],n,i;
	cout<<"Enter number of elements: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int pcount=0;
    int ncount=0;
	for(i=0;i<n;i++)
	{
		if(A[i]>0)
		{
			pcount++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(A[i]<0)
		{
			ncount++;
		}
	}
	cout<<pcount<<" "<<ncount;
	return 0;
}
	
