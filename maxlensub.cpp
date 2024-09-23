class Solution
{
public:
	vector<int> findMaxLenSubarray(vector<int> const &nums, int target)
	{
		map<int,int>mp;
		int sum = 0;
		int len=0,ind=-1;
		mp[0]=-1;
		for(int i=0;i<nums.size();i++)
		{
			sum+=nums[i];
			if(mp.find(sum)==mp.end())
			{
				mp[sum]=i;
			}
			if(mp.find(sum-target)!=mp.end())
			{
				cout << i << " " << mp[sum-target] << endl;
				if(len<i-mp[sum-target]) 
				{

					len=i-mp[sum-target];
					ind=i;
				}
			}
		}
		vector<int>ans;
		for(int i=ind-len+1;i<=ind;i++)
		{
			ans.push_back(nums[i]);
		}
		return ans;
	}
};
