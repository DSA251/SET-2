#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a[100];
    int n;
    cin>>n;
    int ans=0,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        ans=max(ans,sum);
        if(sum<0) sum=0;
    }
    cout << ans << endl;
    return 0;
}
