CC=gcc
CCOPTS=--std=gnu99

BINS=function_pointer_test function_pointer_array_test function_pointers_exercise_1

#disastros_test

.phony: clean all


all:	$(LIBS) $(BINS)

%.o:	%.c $(HEADERS)
	$(CC) $(CCOPTS) -c -o $@  $<

function_pointer_test:	function_pointer_test.c $(LIBS)
	$(CC) $(CCOPTS) -o $@ $^

function_pointer_array_test:	function_pointer_array_test.c $(LIBS)
	$(CC) $(CCOPTS) -o $@ $^

function_pointers_exercise_1:	function_pointers_exercise_1.c $(LIBS)
	$(CC) $(CCOPTS) -o $@ $^

clean:
	rm -rf *.o *~ $(LIBS) $(BINS)
