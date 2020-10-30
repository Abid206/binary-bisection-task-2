#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

long long a,b,c;

long long getSum(long long x)
{
    return (a*x*x)+(b*x)+c;
}

int main()
{
    op();

    int t;
    cin>>t;

    while(t--)
    {
        long long y;
        cin>>a>>b>>c>>y;

        long long l=0, r = 1e6,ans;

        while(l<=r)
        {
            long long mid = (l+r) >> 1;
            if(getSum(mid)>=y)
            {
               ans = mid;
               r = mid-1;
            }
            else l = mid+1;
        }
        cout<<ans<<endl;
    }

    return 0;
}

