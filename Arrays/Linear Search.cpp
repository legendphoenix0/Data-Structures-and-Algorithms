//Linear Search
#include<iostream>
using namespace std;
int main()
{
	int a[1000],n,key;
	cout<<"Enter number of elements in Array: ";
	cin>>n;
	cout<<"Enter number which you have to find: ";
	cin>>key;
	cout<<"Enter numbers in array: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i] == key)
		{
			cout<<"Position at which element is present: "<<i+1<<endl;
			break;
			
		}
		if( i == n)
		{
			cout<<"key is not present: "<<endl;
		}
	}
	
	
}
