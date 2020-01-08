CC := gcc
INCLUDE := -I./
LDFLAGS := -L./ -lstudent
CFLAGS := -Wall $(INCLUDE)
LIB := libstudent.a
src := student.c sort.c
obj := $(src:%.c=%.o)

default : $(LIB)
all : $(LIB) sort_student_tool

$(LIB) : $(obj)
	ar rc $@ $^
sort_student_tool : main.c
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS) 
clean : 
	rm -rf *.o $(LIB)
	rm sort_student_tool

