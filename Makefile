CFLAGS = -std=gnu89 -Wall -Wextra -fpic
SOURCE = src
LIB = lib

# To compile for debug:     make DEBUG=1
# To compile for no debug:  make

ifdef DEBUG
    CFLAGS += -O0 -g
else
    CFLAGS += -O2 -DNDEBUG
endif

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
