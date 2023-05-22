#include<bits/stdc++.h>
using namespace std;
	int countSetBits(int n)
{
	int x=0;
    if (n <= 1)
        return n;
    while(pow(2,x)<=n)x++;
	x--;
    return (x * pow(2, (x - 1))) + (n - pow(2, x) + 1)
           + countSetBits(n - pow(2, x));
}
int main()
{
	int n;
	cin>>n;
	cout<<countSetBits(n);
	return 0;
}