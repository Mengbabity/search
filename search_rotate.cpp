class Solution {
public:
	int search(vector<int> nums, int target) {
		int n = nums.size();
		int high = n - 1;
		int low = 0;

        if(n==0)
            return -1;
        
		while (low < high)
		{
			int mid = (low + high) / 2;
			if (nums[mid] > nums[high])
				low = mid + 1;
			else
				high = mid;
		}

		int small = low;

		low = 0;
		high = n - 1;

		if (target == nums[small])
		{
			return small;
		}
		else
		{
			if (target > nums[high])
				high = small - 1;
			else
				low = small;
		}

		while (low <= high)
		{
			int middle = (low + high) / 2;
			if (nums[middle] == target)
				return middle;
			else
			{
				if (nums[middle] > target)
				{
					high = middle - 1;
					middle = (low + high) / 2;
				}
				else
				{
					low = middle + 1;
					middle = (low + high) / 2;
				}
			}
		}

		return -1;
	}
};
