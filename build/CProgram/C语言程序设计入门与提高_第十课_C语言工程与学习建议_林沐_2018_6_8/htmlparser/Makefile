CC := gcc
INCLUDE := -I./
LDFLAGS := -L./
CFLAGS = -std=c99 -Wall $(INCLUDE)
LIB := libhtmlparser.a

src := attribute.c \
	char_ref.c \
	error.c \
	parser.c \
	string_buffer.c \
	string_piece.c \
	tag.c \
	tokenizer.c \
	utf8.c \
	util.c \
	vector.c

obj := $(src:%.c=%.o)

%.o : %.c
	$(CC) $(CFLAGS) -c $^

$(LIB) : $(obj)
	ar rc $@ $^

output : $(LIB)
	mkdir -p output
	mkdir -p output/lib
	mkdir -p output/include
	cp $(LIB) output/lib
	cp *.h output/include

clean : 
	rm -rf *.o $(LIB)
	rm -rf output


