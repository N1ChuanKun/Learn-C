#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_STRING_SIZE      100
#define MAX_PATTERN_SIZE     100
int pmatch(char *string, char *pat);
void fail(char *pat); /*整个算法的核心*/
int failure[MAX_PATTERN_SIZE];
char string[MAX_STRING_SIZE];
char pat[MAX_STRING_SIZE];

int main(int argc, char* argv[]){
    strcpy(string, "ababbaabaa");
    strcpy(pat, "aab");
    fail(pat);
    int pResult = pmatch(string, pat);

    printf("KMP Algorithm:\t %p, %d\n", &string[pResult], pResult);
}

int pmatch(char *string, char *pat){
    int i=0, j=0;
    int lenS = strlen(string);
    int lenP = strlen(pat);

    while((i < lenS) && (j < lenP)){
        if(string[i] == pat[j]){
            i++; j++;
        }
        else if(j == 0)
            i++;
        else
            j = failure[j - 1] + 1;
    }

    return ((j == lenP) ? (i - lenP) : -1);
}

void fail(char *pat){
    int n = strlen(pat);
    failure[0] = -1;

    for(int j=1; j<n; j++){
        int i = failure[j - 1];
        while ((pat[i] != pat[i+1]) && (i >= 0))
            i = failure[i];
        if(pat[j] == pat[i+1])
            failure[j] = i+1;
        else
            failure[j] = -1;
    }
}
