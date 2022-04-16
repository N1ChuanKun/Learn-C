int nfind(char *string, char *pat){
    /*先对比最后一个字符，然后从前面开始比对*/
    int start = 0;
    int lastS = strlen(string) - 1;
    int lastP = strlen(pat) - 1;
    int endmatch = lastP; 
    /*最后一位的index大小就是lastP*/

    for(int i=0; endmatch <= lastS; endmatch++, start++){
        int j = 0;
        if(string[endmatch] == pat[lastP])
            for(i = start; (j < lastP) && (string[i] == pat[j]); i++, j++);
        if(j == lastP)
            return start; /*比对成功*/
    }
    return -1;
}