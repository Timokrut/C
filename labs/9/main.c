#include <stdio.h>
#include <assert.h> 
#include "func.h"
#include "test.h"


int main()
{
    int number = 0;
    int result[256];
    int length = 0;

    scanf("%d", &number);
    printf("%d\n", count_zeroes(bin(number, result, &length), &length));

    // test_countzeroes();

    return 0;
}
