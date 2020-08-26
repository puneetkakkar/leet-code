class Solution
{
public:
	vector<int> twoSum(vector<int> &nums, int target)
	{
		unordered_map<int, int> umap;
		vector<int> solutionVector;
		for (size_t i = 0; i < nums.size(); ++i)
		{
			if (umap.find(nums[i]) != umap.end())
			{
				solutionVector.push_back(umap[nums[i]]);
				solutionVector.push_back(i);
			}
			int complement = target - nums[i];
			umap[complement] = i;
		}

		return solutionVector;
	}
};