VERSION := gnu11
CLFAGS := -std=$(VERSION) -Iinclude -Wall -g
SERVER := src/server/server.c
CLIENT := src/client/client.c

default: all

server.o: $(SERVER)
	gcc $^ $(CLFAGS)  -o out/server/server.o

all: server.o

clean:
	find . -type f -name '*.o' -delete