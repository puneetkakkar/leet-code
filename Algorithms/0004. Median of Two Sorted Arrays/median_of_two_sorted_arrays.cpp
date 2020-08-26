class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        int len1 = nums1.size();
        int len2 = nums2.size();
        int i = 0, j = 0;
        while (i < len1 && j < len2)
        {
            if (nums1[i] <= nums2[j])
            {
                result.push_back(nums1[i]);
                i++;
            }
            else
            {
                result.push_back(nums2[j]);
                j++;
            }
        }

        while (i != len1)
        {
            result.push_back(nums1[i]);
            i++;
        }

        while (j != len2)
        {
            result.push_back(nums2[j]);
            j++;
        }

        double median;
        int middle = result.size() / 2;
        if (result.size() % 2 == 0)
        {
            median = (double)(result[middle - 1] + result[middle]) / 2;
        }
        else
        {
            median = (double)result[middle];
        }

        return median;
    }
};