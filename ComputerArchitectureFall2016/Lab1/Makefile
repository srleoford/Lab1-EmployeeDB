all: employeeDB

employeeDB.o:binaryTree.h employeeList.c
	gcc employeeList.c -c -g -o employeeDB.o

employeeDB: employeeDB.o
	gcc employeeDB.o -o employeeDB

clean:
	rm -f employeeDB *.o
