VERSION := gnu11
all: server.o

server.o: src/server/server.c
	gcc -std=$(VERSION) src/server/server.c -Wall -o out/server/server.o

clean:
	find . -type f -name '*.o' -delete