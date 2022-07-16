/*
** EPITECH PROJECT, 2022
** test criterion
** File description:
** test criterion
*/

#include <criterion/criterion.h>
#include <criterion/internal/assert.h>
#include <stdlib.h>
#include "tlcstdlibs.h"

static const int nb_test = 10;

Test(x_ccalloc, negativ_n)
{
    char **new = x_ccalloc(-1);

    cr_assert_eq(new, NULL);
}

Test(x_ccalloc, zero_n)
{
    char **new = x_ccalloc(0);

    cr_assert_neq(new, NULL);
    cr_assert_eq(new[0], '\0');
    free(new);
}

Test(x_ccalloc, positiv_n)
{
    char **new = x_ccalloc(nb_test);

    cr_assert_neq(new, NULL);
    for (int i = 0; i < nb_test; i++) {
        cr_assert_eq(new[i], '\0');
    }
    free(new);
}
