// Last updated: 6/12/2026, 11:27:21 AM
1char* longestCommonPrefix(char** strs, int strsSize) {
2    int i, j;
3    if (strsSize == 0)
4        return " ";
5    for (j = 0; strs[0][j] != '\0'; j++) {
6        for (i = 1; i < strsSize; i++) {
7            if (strs[i][j] == '\0' || strs[i][j] != strs[0][j]) {
8                strs[0][j] = '\0';
9                return strs[0];
10            }
11        }
12    }
13    return strs[0];
14}