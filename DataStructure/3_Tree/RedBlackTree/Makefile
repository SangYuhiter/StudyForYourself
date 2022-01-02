exe_name=main.out
program_name=RedBlackTree
objects_name=$(program_name).o

CPPFLAGS = 
CFLAGS += -g
LDFLAGS =

$(exe_name):$(objects_name)
	g++ $(CFLAGS) -o $(exe_name) $(objects_name) 

$(program_name).o:$(program_name).h
	g++ $(CFLAGS) -c $(program_name).cpp -o $(program_name).o

.PHONY:	clean
clean:
	-rm $(exe_name) $(objects_name) 
