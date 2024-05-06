char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) 
        return "";
    int prefixLen = strlen(strs[0]); 
    for (int i = 1; i < strsSize; i++) {
        int j;
        for (j = 0; j < prefixLen && strs[i][j] && strs[0][j] == strs[i][j]; j++);
        prefixLen = j;
    }   
    char *prefix = (char *)malloc((prefixLen + 1) * sizeof(char));
    strncpy(prefix, strs[0], prefixLen);
    prefix[prefixLen] = '\0';    
    return prefix;
}
