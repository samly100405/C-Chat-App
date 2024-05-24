#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdbool.h>

#include <sys/time.h>

#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "utils/constants.h"

int main(int argc, char *argv[]) {
    printf("default port: %d\n", DEFAULT_PORT);
}
