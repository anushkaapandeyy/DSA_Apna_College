#include<bits/stdc++.h>
using namespace std;
/* in order to get position of 1000
1000 = 8
2^3 2^2 2^1 2^0
log base 2(8)+1 = position of 1
=4
*/
/* to find if it has only 1 set bit
if youve given n and youve to find binary of n-1
101100 - n
101011 - n-1 change right most set bit se end tak ulta krdo
& of n and n-1
101000
if only 1 set bit & of n n-1
000000 all 0's
*/
int main()
{
	int n;
	cin>>n;
	if(n==0)cout<<-1;
	if((n&n-1)==0)cout<<log2(n)+1;
	cout<<-1;
}
