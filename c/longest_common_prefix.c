// longest common prefix

char* longestCommonPrefix(char** strs, int strsSize) {
    if (!strsSize)
        return "";
    
    int len[strsSize];
    int min_len = strlen(strs[0]);
    len[0] = min_len;
    int tmp;
    
    if (strsSize == 1)
        return strs[0];
    
    for (int i = 1; i < strsSize; i++) {
        tmp = strlen(strs[i]);
        if (tmp < min_len)
            min_len = tmp;
        len[i] = tmp;
    }
    if (len == 0)
        return "";

    for (int i = 0; i < min_len; i++) {
        for(int j = 1; j < strsSize; j++){
            if (strs[0][i] != strs[j][i]){
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }
    strs[0][min_len] = '\0';
    return strs[0];
}
