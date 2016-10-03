all: employeeDemo

employeeList.o: employeeList.c binaryTree.h
	cc -c -g employeeList.c

employeeDemo.o: binaryTree.h employeeDBDemo.c
	cc -c -g employeeDBDemo.c 

employeeDemo: employeeDBDemo.o employeeList.o
	cc -o $@ $^

clean:
	rm -f employeeDBDemo employeeDemo *.o
