// Last updated: 6/17/2026, 1:12:43 PM
1void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
2    int i = m - 1, j = n - 1, k = m + n - 1;     
3    while (i >= 0 && j >= 0) {
4        if (nums1[i] > nums2[j]) {
5            nums1[k] = nums1[i]; 
6            i--;                 
7        } else {
8            nums1[k] = nums2[j];
9            j--;                 
10        }
11        k--;                   
12    }
13    while (j >= 0) {
14        nums1[k] = nums2[j];
15        j--;
16        k--;
17    }
18}