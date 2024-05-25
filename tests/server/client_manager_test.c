#include "unity/unity.h"
#include "server/client_manager.h"

#include "utils/constants.h"

void setUp() {

}

void tearDown() {

}

void test_initGroup() {
    ClientGroup *group = initGroup(MAX_CLIENTS);

    TEST_ASSERT_NOT_NULL(group);
    TEST_ASSERT_EQUAL(MAX_CLIENTS, group->maxClients);
    TEST_ASSERT_EQUAL(0, group->numClients);
    TEST_ASSERT_EMPTY(group->clients);
}

int main() {
    UnityBegin("tests/client_manager_test.c");
    RUN_TEST(test_initGroup);

    return (UnityEnd());
}