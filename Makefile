VERSION := gnu11
CLFAGS := -std=$(VERSION) -Iinclude -Wall -g
SERVER := src/server/server.c
CLIENT := src/client/client.c

default: all

.PHONY server
server.o: $(SERVER)
	gcc $^ $(CLFAGS)  -o out/server/server.o

.PHONY all
all: server.o

.PHONY clean
clean:
	find . -type f -name '*.o' -delete