class Solution {
public:
    
int maxArea(vector<int>& height) {
	int largest = 0;
	int ptr1, ptr2;
	ptr1 = 0;
	ptr2 = height.size() - 1;
	largest = min(height[ptr1], height[ptr2]) * (ptr2 - ptr1);

	while (ptr1 < ptr2)
	{
		if (height[ptr1] < height[ptr2])
		{
			ptr1++;
		}
		else
		{
			ptr2--;
		}
		largest = max(largest, min(height[ptr1], height[ptr2]) * (ptr2 - ptr1));
	}
	return largest;
}
};
