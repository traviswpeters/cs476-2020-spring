# CFLAGS: Extra flags to give to the C compiler
CFLAGS   += -Wall -O2 -g #-Werror 
SRC       = $(wildcard *.c)
OBJ       = $(SRC:.c=.o)
EXE       = $(subst .c,,$(SRC))

.PHONY: all clean

all: $(OBJ) $(EXE)

clean:
	rm -rf *.o *.so *.a *.la $(EXE)