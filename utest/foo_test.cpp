#include "foo.hpp"
#include <gtest/gtest.h>

TEST(foo, zero) { 
    ASSERT_EQ(0, foo('s'));
}

TEST(foo, one) { 
    ASSERT_EQ(1, foo('r'));
}

// TEST(foo, minus) { 
//     ASSERT_EQ(-1, foo('c'));
//     ASSERT_EQ(-1, foo('v'));
// }

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}