#include <bits/stdc++.h>
using namespace std;
int main() 
{
   int n;
   cin>>n;
   int a[100];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int f=0;
   int req;
   cin>>req;
   int i=0,j=n-1;
   while(i<j)
   {
       int sum = a[i]+a[j];
       if(sum>req)
       {
           if(a[i]>a[j]) i++;
           else j--;
       }
       if(sum<req)
       {
           if(a[i]<a[j]) i++;
           else j--;
       }
       if(sum==req) 
       {
           f=1;
           cout << "Yes" << endl;
           break;
       }
   }
   if(f==0) cout << "No" << endl;
}
