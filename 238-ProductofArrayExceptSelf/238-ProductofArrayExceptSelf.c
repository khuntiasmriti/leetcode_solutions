// Last updated: 6/18/2026, 11:47:22 PM
1#include <stdlib.h>
2
3/**
4 * Note: The returned array must be malloced, assume caller calls free().
5 */
6int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
7    *returnSize = numsSize;
8
9    int* ans = (int*)malloc(numsSize * sizeof(int));
10    if (ans == NULL) {
11        return NULL; 
12    } 
13    ans[0] = 1;
14    for (int i = 1; i < numsSize; i++) {
15        ans[i] = ans[i - 1] * nums[i - 1];
16    }
17    int rp = 1;
18    for (int i = numsSize - 1; i >= 0; i--) {
19        ans[i] = ans[i] * rp;
20        rp = rp * nums[i]; 
21    } 
22    
23    return ans;
24}