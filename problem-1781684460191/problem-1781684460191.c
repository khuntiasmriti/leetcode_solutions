// Last updated: 6/17/2026, 1:51:00 PM
1void sortColors(int* nums, int numsSize) {
2    int i, j, k;
3    for (i = 0; i < numsSize - 1; i++) {
4        for (j = 0; j < numsSize - 1 - i; j++) {
5            if (nums[j] > nums[j + 1]) {
6                k = nums[j];
7                nums[j] = nums[j + 1];
8                nums[j + 1] = k;
9            }
10        }
11    }
12}