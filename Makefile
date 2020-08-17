CFLAGS = -std=gnu89 -Wall -Wextra -fpic
SOURCE = src
LIB = lib

all: file_exists.so file_exists.a file_path_exists.so file_path_exists.a

shared: file_exists.so file_path_exists.so

static: file_exists.a file_path_exists.a

#file_exists
file_exists.so: $(SOURCE)/file_exists.o 
	$(CC) $(CFLAGS) -shared -o $(LIB)/$@ $^

file_exists.a: $(SOURCE)/file_exists.o
	ar -rcs $(LIB)/$@ $^

#file_path_exists
file_path_exists.so: $(SOURCE)/file_path_exists.o
	$(CC) $(CFLAGS) -shared -o $(LIB)/$@ $^

file_path_exists.a: $(SOURCE)/file_path_exists.o
	ar -rcs $(LIB)/$@ $^

clean: 
	rm -rf $(SOURCE)/*.o $(LIB)/*
