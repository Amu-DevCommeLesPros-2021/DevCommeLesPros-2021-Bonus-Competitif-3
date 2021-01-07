#include "test_harness/test_harness.h"

#include <stddef.h>

int const tests_total = 14;
int const test_column_width = 60;

long maximum_power(long panels[], size_t const size_panels)
{
    return 0;
}

int main()
{
    TEST(maximum_power((long[]){2, 0, 2, 2, 0}, 5) == 8);
    TEST(maximum_power((long[]){-2, -3, 4, -5}, 5) == 60);

    // ???

    return 0;
}
