#include "array_common.h"
#include <string.h>

#define FALSE 0
#define TRUE 1


/* 一种 type 是 humanBeing的结构体 */
typedef struct {
    char name[10];
    int age;
    float salary;
} humanBeing;

/* 一种 type 是 humanBeing2的结构体 */
typedef struct {
    char name[10];
    int age;
    float salary;
} humanBeing2;


/* 比较结构体是否相等 (最好使用指针) */
int humansEqual(humanBeing* person1, humanBeing* person2){
    if(strcmp(person1->name, person2->name))
        return FALSE;
    if(person1->age != person2->age)
        return FALSE;
    if(person1->salary != person1->salary)
        return FALSE;
    
    return TRUE;
}


typedef struct {
    enum tagField {female, male} sex;

    union {
        int children;
        int beard;
    } u;
} sexType;

typedef struct {
    int month;
    int day;
    int year;
} date;

typedef struct{
    char name[10];
    int age;
    float salary;
    date birth;
    sexType sexInfo;
} humanBeing3;

