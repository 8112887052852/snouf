/*!
 *  \file   main.cpp
 *  \brief  Implements main
 */

#include <gtest/gtest.h>

int main(int pArgc, char** pArgv)
{
    ::testing::InitGoogleTest(&pArgc, pArgv);
    return RUN_ALL_TESTS();
}