#include <stdio.h>
#include <assert.h> 
#include <string.h>
#include "function.h"


void test_decTo11th()
{
    char result[120];

    // Test case 1: 
    decTo11th(120, result);
    assert(strcmp(result, "AA") == 0);
    printf("Test 1 passed\n");

    // Test case 2: 
    decTo11th(11, result);
    assert(strcmp(result, "10") == 0);
    printf("Test 2 passed\n");

    // Test case 3: 
    decTo11th(0, result);
    assert(strcmp(result, "0") == 0);
    printf("Test 3 passed\n");

}


int main()
{
    test_decTo11th();
    printf("\nAll tests passed successfully!\n");
    return 0;
}
