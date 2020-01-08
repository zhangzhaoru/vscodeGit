#include <string.h>
#include "student.h"

int student_cmp(const void *a, const void *b){
    student *s1 = (student *)a;
    student *s2 = (student *)b;
    if (s1->score != s2->score){
        return s2->score - s1->score;
    }
    return strcmp(s1->name, s2->name);
}

student g_student[MAX_STUDENT_BUFFER];
