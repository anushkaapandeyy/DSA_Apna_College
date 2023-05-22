#include<bits/stdc++.h>
using namespace std;
/* we do xor of both numbers and find 
different sets */
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=0,n=0;
    n=a^b;
    while(n>0)
    {
        if(n&1)
            ans+=1;
        n = n>>1;
    }
    cout<<ans;

}