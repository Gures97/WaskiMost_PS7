OBJ = main.o threads_functions.o

all: WaskiMost

WaskiMost: $(OBJ)
	gcc $(OBJ) -o WaskiMost

$(OBJ):thread_functions.h

.PHONY: clean

clean:
	rm -f *.o