#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,count=0;
    cin>>n>>m;
    if(n>0 && m>0)
    {
        while(1)
        {
            if(n<m)
            {
                n--;
                m-=2;
                if(n>=0 && m>=0)
                    count++;
            }
            else
            {
                n-=2;
                m--;
                if(n>=0 && m>=0)
                    count++;
            }
            if(n==0 || m==0)
                break;

        }
    }
    else
        count=0;
    cout<<count;

}
