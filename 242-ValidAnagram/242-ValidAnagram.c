// Last updated: 6/12/2026, 11:29:22 AM
1
2bool isAnagram(char* s, char* t) {
3    
4    if (strlen(s) != strlen(t))
5        return false;
6
7    int count[26] = {0};
8    int i;
9
10    for (i = 0; s[i] != '\0'; i++) {
11        count[s[i] - 'a']++;
12        count[t[i] - 'a']--;
13    }
14
15    for (i = 0; i < 26; i++) {
16        if (count[i] != 0)
17            return false;
18    }
19
20    return true;
21}