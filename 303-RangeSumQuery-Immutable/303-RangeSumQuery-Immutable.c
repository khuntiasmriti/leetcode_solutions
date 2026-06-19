// Last updated: 6/20/2026, 1:38:29 AM
1#include <stdlib.h>
2
3typedef struct {
4    int* ps;
5} NumArray;
6
7NumArray* numArrayCreate(int* nums, int numsSize) {
8    NumArray* obj = (NumArray*)malloc(sizeof(NumArray));
9    if (obj == NULL) return NULL;
10
11    obj->ps = (int*)malloc((numsSize + 1) * sizeof(int));
12    if (obj->ps == NULL) {
13        free(obj);
14        return NULL;
15    }
16
17    obj->ps[0] = 0;
18    
19    for (int i = 0; i < numsSize; i++) {
20        obj->ps[i + 1] = obj->ps[i] + nums[i];
21    }
22
23    return obj;
24}
25
26int numArraySumRange(NumArray* obj, int left, int right) {
27    return obj->ps[right + 1] - obj->ps[left];
28}
29
30void numArrayFree(NumArray* obj) {
31    if (obj != NULL) {
32        free(obj->ps);
33        free(obj);
34    }
35}