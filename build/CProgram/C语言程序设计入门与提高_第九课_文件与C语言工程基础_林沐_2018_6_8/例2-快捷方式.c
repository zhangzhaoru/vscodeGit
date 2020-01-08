
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct LinkHead{
    int	temp[7];
    FILETIME create_time;
};
typedef struct LinkHead LinkHead;

int main(int argc, char *argv[]){
    FILE *fp = fopen(argv[1], "rb");
  	LinkHead head;
  	fread(&head, 1, sizeof(LinkHead), fp);
  	SYSTEMTIME system_time;
   	FileTimeToSystemTime(&head.create_time, &system_time);
   	printf("year = %d\n", system_time.wYear);
   	printf("month = %d\n", system_time.wMonth);
   	printf("day = %d\n", system_time.wDay);
    fclose(fp);
    return 0;  
}

