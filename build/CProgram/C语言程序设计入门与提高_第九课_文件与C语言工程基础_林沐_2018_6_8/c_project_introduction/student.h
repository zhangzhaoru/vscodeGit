
#define MAX_STUDENT_BUFFER 1024

struct student{
    char name[20];
    int score;
};

typedef struct student student;

int student_cmp(const void *a, const void *b);
