// Last updated: 6/12/2026, 11:29:09 AM
1bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
2    
3    int rows = matrixSize;
4    int cols = matrixColSize[0];
5
6    int low = 0;
7    int high = rows * cols - 1;
8
9    while (low <= high) {
10        int mid = low + (high - low) / 2;
11
12        int row = mid / cols;
13        int col = mid % cols;
14
15        if (matrix[row][col] == target)
16            return true;
17
18        if (matrix[row][col] < target)
19            low = mid + 1;
20        else
21            high = mid - 1;
22    }
23
24    return false;
25}