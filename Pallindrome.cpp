#include <bits/stdc++.h>
using namespace std;
int main() 
{
   string s;
   cin>>s;
   vector<char>v;
   for(int j=0;j<s.size();j++)
   {
       
            if((s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z'))
                v.push_back(s[j]);
       
   }
   int f=0;
   for(int i=0;i<v.size()/2;i++)
   {
       if(v[i]!=v[s.size()-i-1]) 
       {
           f=1;
           break;
       }
   }
   if(f) cout << "Not a Pallindrome" << endl;
   else  cout << "Pallindrome" << endl;
}
