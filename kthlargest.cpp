class Solution {
  public:
    
    int kthSmallest(vector<int> &arr, int k) {
        int n = arr.size();
        int mx=0;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,arr[i]);
        }
        vector<int>a(mx+1,0);
        for(int i=0;i<n;i++)
        {
            a[arr[i]]++;
        }
        int cnt=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]) cnt+=a[i];
            if(cnt>=n-k) return i;
        }
    }
};
