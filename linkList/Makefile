CC=gcc
CFLAGS=-I.
DEPS = stack.h
OBJ = mainStack.o stack.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

stack: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -rf $/*.o *~ core $(INCDIR)/*~
