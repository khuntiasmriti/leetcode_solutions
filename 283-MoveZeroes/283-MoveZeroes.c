// Last updated: 6/18/2026, 6:23:02 PM
1void moveZeroes(int* nums, int numsSize) {
2    int j = 0;
3
4    for (int i = 0; i < numsSize; i++) {
5        if (nums[i] != 0) {
6            nums[j] = nums[i];
7            j++;
8        }
9    }
10
11    while (j < numsSize) {
12        nums[j] = 0;
13        j++;
14    }
15}