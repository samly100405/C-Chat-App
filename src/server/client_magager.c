#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "server/client_manager.h"

#include "utils/constants.h"

bool compareClients(Client *a, Client *b);

ClientGroup *initGroup(int maxClients) {
    ClientGroup *ret = (ClientGroup *)calloc(0, sizeof(ClientGroup));

    if (ret == NULL) {
        perror("could not init Group");
        return NULL;
    }

    ret->numClients = 0;
    ret->maxClients = maxClients;

    return ret;
}

Client *initClient(const char *name, int fd) {
    if (strlen(name) > MAX_NAME_LENGTH) {
        perror("name too long");
        return NULL;
    }
}

bool addClient(ClientGroup *group, Client *client) {
    if (group->numClients == group->maxClients) return false;

    group->clients[group->numClients] = client;
    group->numClients = group->numClients + 1;

    return true;
}

bool removeClient(ClientGroup *group, Client *client) {
    if (group->numClients == 0) return false;

    // Linear search for this client
    for (int i = 0; i < group->numClients; i++) {
        if (compareClients(client, group->clients[i])) {
            group->numClients = group->numClients - 1;

            // set this client's slot to the last client slot
            // this prevents "holes" in our clients array.
            group->clients[i] = group->clients[group->numClients];
            group->clients[group->numClients] = NULL;

            return true;
        }
    }

}

bool compareClients(Client *a, Client *b) {
    if (a == b) return true;

    if (strcmp(a->name, b->name) != 0) return false;
    if (a->fd != b->fd) return false;

    return true;
}