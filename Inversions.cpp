#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
ll invCount=0;
void merge(ll *arr,ll low,ll mid,ll high)
{
    ll l = mid-low+1;
    ll r = high-mid;
    
    ll left[l],right[r];
    for(int i=low;i<=mid;i++)
    {
        left[i-low]=arr[i];
    }
    for(int i=mid+1;i<=high;i++)
    {
        right[i-(mid+1)]=arr[i];
    }
    int i=0,j=0,k=low;
    while(i<l && j<r)
    {
        if(left[i]<=right[j])
        {
            arr[k++]=left[i++];
        }
        else
        {
            arr[k++]=right[j++];
            invCount+=(l-i);
        }
    }
    while(i<l)
    {
        arr[k++]=left[i++];
    }
    while(j<r)
    {
        arr[k++]=right[j++];
    }
    
    

}
void mergeSort(ll *arr,ll low,ll high)
{
    if(low>=high) return;
    ll mid = low+(high-low)/2;

    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
   
    merge(arr,low,mid,high);
    
    
}
ll getInversions(ll *arr, int n){
    invCount=0;
    mergeSort(arr,0,n-1);
    return invCount;
}
