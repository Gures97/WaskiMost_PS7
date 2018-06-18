OBJ = main.o thread_functions.o thread_structs.o

all: WaskiMost

WaskiMost: $(OBJ)
	gcc $(OBJ) -pthread -o WaskiMost

$(OBJ):thread_functions.h thread_structs.h

.PHONY: clean

clean:
	rm -f *.o