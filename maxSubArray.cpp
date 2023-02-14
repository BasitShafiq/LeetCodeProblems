class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int largest = INT_MIN;
	  int temp=0;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i; j < nums.size(); j++)
		{
	
			temp =temp+nums[j];
			largest = max(temp, largest);
		}
     temp=0;
	}
	return largest;
    }
};
