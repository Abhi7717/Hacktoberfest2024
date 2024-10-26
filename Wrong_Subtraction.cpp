#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,m,k;
    cin>>k>>n;
    // if(k%10==0)
    // {
        while(n--)
        {   if(k%10==0)
            k=k/10;
            else if(k%10!=0)
            {
                // while()
                k=k-1;
                // break;
            }
        }
        cout<<k;
    // }
    
}
