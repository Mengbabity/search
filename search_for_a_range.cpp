class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		map<int, int> num;
		vector<int> res;
		int n = nums.size();
		int low = 0;
		int high = n - 1;

		for (int i = 0; i<n; i++)
		{
			num[nums[i]]++;
		}

		while (low <= high)
		{
			int mid = (low + high) / 2;
			if (nums[mid] == target)
			{
				while (nums[mid-1] == target && mid-1>=0)
				{
					mid--;
				}
				res.push_back(mid);
				res.push_back(mid + num[nums[mid]]-1);
				return res;
			}
			else
			{
				if (nums[mid] > target)
				{
					high = mid - 1;
					mid = (low + high) / 2;
				}
				else
				{
					low = mid + 1;
					mid = (low + high) / 2;
				}
			}
		}

		res.push_back(-1);
		res.push_back(-1);
		return res;
	}
};
