#include<iostream>
using namespace std;
int main()
{
	int x=0,y=0;
	char ch;
	ch=cin.get();
	while(ch!='\n')
	{
		if(ch=='N'|| ch=='n')
		{
			x--;
		}
		else if(ch=='E'|| ch=='e')
		{
			y++;
		}
		else if(ch=='W'|| ch=='w')
		{
			y--;
		}
		else if(ch=='S'|| ch=='s')
		{
			x++;
		}
		
		ch=cin.get();
	}
	cout<<"Dispacement in x direction :" <<x<< "and y-direction: "<<y;
}
