exe_name=main
program_name=LinkList
objects_name=$(program_name).o

$(exe_name):$(objects_name)
	g++ -o $(exe_name) $(objects_name) 

$(program_name).o:$(program_name).h

.PHONY:	clean
clean:
	-rm $(exe_name) $(objects_name) 
