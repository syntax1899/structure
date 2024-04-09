ball: football.o main.o
	gcc -o ball football.o main.o
main.o: main.c
	gcc -c main.c	
football.o: football.c
	gcc -c football.c 
clean:
	rm ball * .o