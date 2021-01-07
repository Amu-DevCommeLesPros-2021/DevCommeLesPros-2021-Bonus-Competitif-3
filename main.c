#include "test_harness/test_harness.h"

#include <stddef.h>

int const tests_total = 2;
int const test_column_width = 40;

int maximum_power(int panels[], size_t const size_panels)
{
    return 0;
}

int main()
{
    TEST(maximum_power((int[]){2, 0, 2, 2, 0}, 5) == 8);
    TEST(maximum_power((int[]){-2, -3, 4, -5}, 5) == 60);

    // ???

    return 0;
}
