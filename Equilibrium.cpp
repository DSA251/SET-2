#include <bits/stdc++.h>
using namespace std;
int main() 
{
   int n;
   cin>>n;
   int a[100];
   int sum=0;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       sum+=a[i];
   }
   int eqInd=-1;
   int sum2=0;
   cout << sum << endl;
   for(int i=0;i<n;i++)
   {
       
       if(sum2==sum-sum2-a[i]) 
       {
           eqInd=i+1;
           break;
       }
       sum2+=a[i];
       
   }
  cout << eqInd << endl;
}
