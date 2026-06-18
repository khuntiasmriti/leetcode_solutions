// Last updated: 6/18/2026, 11:45:54 PM
1#include <stdlib.h>
2
3/**
4 * Note: The returned array must be malloced, assume caller calls free().
5 */
6int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
7    *returnSize = numsSize;
8
9    int* answer = (int*)malloc(numsSize * sizeof(int));
10    if (answer == NULL) {
11        return NULL; 
12    } // <-- FIXED: Added missing closing brace for the if statement
13
14    // Forward pass
15    answer[0] = 1;
16    for (int i = 1; i < numsSize; i++) {
17        answer[i] = answer[i - 1] * nums[i - 1];
18    }
19    
20    // Backward pass
21    int rightProduct = 1;
22    for (int i = numsSize - 1; i >= 0; i--) {
23        answer[i] = answer[i] * rightProduct;
24        rightProduct = rightProduct * nums[i]; 
25    } // <-- FIXED: Added missing closing brace for the for loop
26    
27    return answer;
28}