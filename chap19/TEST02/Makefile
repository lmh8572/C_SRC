app.out : main.o a.o b.o
	gcc main.o a.o b.o -o app.out

main.o : main.c
	gcc -c main.c -o main.o

clean: 
	rm -rf main.o app.out