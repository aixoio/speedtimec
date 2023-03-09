main: bin/main.o
	gcc bin/main.o -o build -Ilibs/include

bin/main.o:
	gcc -c src/main.c -o bin/main.o -Ilibs/include