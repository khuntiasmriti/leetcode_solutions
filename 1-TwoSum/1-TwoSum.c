// Last updated: 6/12/2026, 11:28:20 AM
1int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
2    int i, j;
3    int* result = malloc(2 * sizeof(int));
4
5    for(i = 0; i < numsSize; i++) {
6        for(j = i + 1; j < numsSize; j++) {
7            if(nums[i] + nums[j] == target) {
8                result[0] = i;
9                result[1] = j;
10                *returnSize = 2;
11                return result;
12            }
13        }
14    }
15
16    return NULL;
17}