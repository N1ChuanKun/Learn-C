char *(strstr_Plauger)(const char *s1, const char *s2){
    if(*s2 == '\0')
        return ((char *)s1);//强制转型

    for( ;s1 = strchr(s1, s2) != NULL; ++s1){
        /*  s1中找到和s2匹配的内容，然后返回s1
            此时s1指针指向与s2匹配内容的index   */

        const char *sc1, *sc2;

        for(sc1 = s1, sc2 = s2; ; )
            if(*++sc2 == '\0')        //此时sc2指针移到sc2+1的位置
                return ((char *)s1);
            else if(*++sc1 != *sc2)   //此时sc1在sc1+1，并和sc2+1对比
                break;
    }
    return(NULL);
}