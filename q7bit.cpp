#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,l,r;
	cin>>x>>y>>l>>r;
	for(int i=l;i<=r;i++)
	{
		int mask = 1<<(i-1);
		if(y&mask)
		{
			x=x|mask;
		}
	}
	cout<<x;
}