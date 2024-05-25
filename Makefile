VERSION := gnu11
CLFAGS := -std=$(VERSION) -Isrc -Ilib -Wall -g

SERVER := src/server/server.c
CLIENT := src/client/client.c

CLIENT_MANAGER_TEST := tests/server/client_manager_test.c

default: all 

.PHONY: server
server.o: $(SERVER)
	gcc $^ $(CLFAGS) -o out/server/server.o

.PHONY: client_manager_test
client_manager_test.o: $(CLIENT_MANAGER_TEST)
	gcc $^ $(CLFAGS) -o out/tests/client_manager_test.o

.PHONY: all
all: server.o

.PHONY: clean
clean:
	find . -type f -name '*.o' -delete