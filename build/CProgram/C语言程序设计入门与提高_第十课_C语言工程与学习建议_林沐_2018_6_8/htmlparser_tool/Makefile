
CC := gcc
INCLUDE := -I./output/include 
LDFLAGS := -L./output/lib -lhtmlparser
CFLAGS := -Wall $(INCLUDE)

all: parser_title

parser_title: parser_title.c
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm parser_title
