  
/**
 * @file tests.c
 * @author Sanya Chhabra
 * @brief test file to test the showHangman function using Unity framework
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "unity.h"
#include "unity_internal.h"
#include "fun.h"

#define PROJECT_NAME    "hangman"

void showHangman(int);

// Required by the unity test framework
void setUp(){}
// Required by the unity test framework
void tearDown(){}

int main()
{
    UNITY_BEGIN();

    RUN_TEST(showHangman);

    return UNITY_END();
}

void showHangman(int)
{
    TEST_ASSERT_EQUAL(1, showHangman(1));
}

