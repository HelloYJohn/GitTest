ABC = main.o hello.o
ABD = $(shell pwd)
all: main clean
main: ${ABC}
	gcc -o main main.o hello.o

main.o: main.c hello.h
	gcc -c main.c -o main.o

hello.o: hello.c hello.h
	gcc -c hello.c -o hello.o

.PHONY:clean
clean:
	rm *.o
	echo $(ABD)
