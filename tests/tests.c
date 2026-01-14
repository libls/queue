#define LS_TEST_IMPLEMENTATION
#include "ls_test.h"

int add(int a, int b) {
    return a + b;
}

TEST_CASE(add) {
    ASSERT_EQ(add(1, 2), 3, "%d");
    ASSERT_EQ(add(2, 3), 5, "%d");
    ASSERT_EQ(add(0, 0), 100000, "%d");

    return 0;
}

TEST_MAIN
