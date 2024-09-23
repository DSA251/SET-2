#include <bits/stdc++.h>
using namespace std;
int main() 
{
   int n;
   cin>>n;
   int a[100];
   int maxsum=0,sum=0;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int k;
   cin>>k;
   for(int i=0;i<k;i++)
   {
       maxsum+=a[i];
   }
   sum=maxsum;
   if(k>n) cout << "Invalid" << endl;
   else
   {
   int i=0,j=k-1;
   while(j<n-1)
   {
       sum-=a[i];
       i++;
       j++;
       sum+=a[j];
       maxsum=max(sum,maxsum);
   }
   cout << maxsum << endl;
   }
}
