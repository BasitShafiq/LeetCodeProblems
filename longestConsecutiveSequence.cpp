int longestConsecutive(vector<int>& nums)
{
	unordered_map<int, int>hashMap;
	for (int i = 0; i < nums.size(); i++)
	{
		hashMap[nums[i]];
	}
	unordered_map<int, int>::iterator ptr1 = hashMap.begin();
	unordered_map<int, int>::iterator ptr2 = hashMap.end();
	for (; ptr1 != ptr2; ptr1++)
	{
		cout << ptr1->first << " ";
	}
	int longestStreak = 1;
	int currentStreak = 1;
	int currNum;
	ptr1 = hashMap.begin();
	ptr2 = hashMap.end();
	for (; ptr1 != ptr2; ptr1++)
	{
		if (hashMap[ptr1->first - 1])
		{
			currentStreak = 1;
			currNum = ptr1->first;
			while (hashMap[ptr1->first + 1])
			{
				currentStreak++;
				longestStreak = max(longestStreak, currentStreak);
				currNum = ptr1->first;
			}
		}
	}
	return max(longestStreak, currentStreak);
}