#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int &x:A)
	{
		cin>>x;
	}
	for(int x:A)
	{
		cout<<x<<endl;
	}
}
