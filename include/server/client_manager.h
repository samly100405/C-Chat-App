#include <stdbool.h>

#include "utils/constants.h"

typedef struct {
    char name[MAX_NAME_LENGTH];
    int fd;
} Client;

typedef struct {
    Client *clients[MAX_CLIENTS];
    bool isSlotFull[MAX_CLIENTS];
    int numClients;
    int maxClients;
} ClientGroup;

// Creates and returns a new ClientGroup pointer
ClientGroup *initGroup(int maxClients);

// Creates and returns a new Client pointer
Client *initClient(const char *name, int fd);

// Adds a client to a group
// Returns true if successful
// False if unsuccessful
bool addClient(ClientGroup *group, Client *client);

// Removes a client from a group
// Returns true if successful
// False if unsuccessful
bool removeClient(ClientGroup *group, Client *client);