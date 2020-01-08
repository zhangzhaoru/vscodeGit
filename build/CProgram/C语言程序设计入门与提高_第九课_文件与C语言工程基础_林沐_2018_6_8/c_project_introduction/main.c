#include <stdio.h>
#include "student.h"
#include "sort.h"

extern student g_student[MAX_STUDENT_BUFFER];

int main(){
    int n;
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%s %d", g_student[i].name, &g_student[i].score);
    }
    sort_array(g_student, n, sizeof(g_student[0]), student_cmp);
    for (i = 0; i < n; i++){
        printf("%s %d\n", g_student[i].name, g_student[i].score);
    }   
    return 0;
}
