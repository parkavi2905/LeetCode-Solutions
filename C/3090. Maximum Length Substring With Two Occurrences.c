int maximumLengthSubstring(char* s) {
    int max_len=0;
    int *f=calloc(26,sizeof(int));
    int right,left;
    for(right=0,left=0;right<strlen(s);right++){
        f[s[right]-'a']++;
        while(f[s[right]-'a']>2){
            f[s[left++]-'a']--;
        }
        max_len=fmax(max_len,right-left+1);
    }
    free(f);
    return max_len;
}
