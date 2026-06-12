// Last updated: 6/12/2026, 11:28:28 AM
1int searchInsert(int* nums, int numsSize, int target) {
2    int low =0, high, mid;
3    high=numsSize-1;
4    while (low<=high)
5        {
6            mid=low+(high-low)/2;
7        if (nums[mid]==target)
8            return mid;
9        if (nums[mid]>target)
10            high=mid-1;
11        else
12            low=mid+1;
13        }
14    return low;
15}