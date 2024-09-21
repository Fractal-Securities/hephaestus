#include <gtest/gtest.h>

int main(int argc, char **argv)
{

    // Initialize Google Test
    ::testing::InitGoogleTest(&argc, argv);

    // Return the results of the tests
    return RUN_ALL_TESTS();

}