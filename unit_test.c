/*
** EPITECH PROJECT, 2019
** PSU_my_printf_bootstrap_2019
** File description:
** unit_test.c
*/

#include<criterion/criterion.h>
#include<criterion/redirect.h>
#include "my.h"

void  redirect_all_std(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}

Test(my_printf , simple_string , .init = redirect_all_std)
{
    my_printf("hello  world");
    cr_assert_stdout_eq_str("hello  world");
}

Test(my_printf , string_with_decimal_d_one_digit , .init = redirect_all_std)
{
    my_printf("I have %d years old", 2);
    cr_assert_stdout_eq_str("I have 2 years old");
}

Test(my_printf , string_with_decimal_i , .init = redirect_all_std)
{
    my_printf("I have %d years old", -32);
    cr_assert_stdout_eq_str("I have -32 years old");
}

Test(my_printf , string_with_decimal_d , .init = redirect_all_std)
{
    my_printf("I have %d years old", 12);
    cr_assert_stdout_eq_str("I have 12 years old");
}

Test(my_printf , simple_string_with_one_modulo , .init = redirect_all_std)
{
    my_printf("hello %world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf , string_with_str , .init = redirect_all_std)
{
    my_printf("there is one %s !\n", "test");
    cr_assert_stdout_eq_str("there is one test !\n");
}

Test(my_printf , string_one_character_c , .init = redirect_all_std)
{
    my_printf("Question %c is too difficult", 'C');
    cr_assert_stdout_eq_str("Question C is too difficult");
}

Test(my_printf , strings_with_multiple_decimal_and_string , .init = redirect_all_std)
{
    my_printf("I was born in %d/%s/%d", 12, "01", 2003);
    cr_assert_stdout_eq_str("I was born in 12/01/2003");
}

Test(my_printf , string_with_unsigned_number_positiv , .init = redirect_all_std)
{
    my_printf("%u", 3);
    cr_assert_stdout_eq_str("3");
}

Test(my_printf , string_with_unsigned_number_negativ , .init = redirect_all_std)
{
    my_printf("%u", -3);
    cr_assert_stdout_eq_str("4294967293");
}

Test(my_printf , string_with_hexadecimal_convertion , .init = redirect_all_std)
{
    my_printf("1211(10) = %x(16)", 1211);
    cr_assert_stdout_eq_str("1211(10) = 4bb(16)");
}

Test(my_printf , string_with_hexadecimal_zero_convertion , .init = redirect_all_std)
{
    my_printf("0(10) = %x(16)", 0);
    cr_assert_stdout_eq_str("0(10) = 0(16)");
}

Test(my_printf , string_with_binary_convertion , .init = redirect_all_std)
{
    my_printf("1211(10) = %b(2)", 1211);
    cr_assert_stdout_eq_str("1211(10) = 10010111011(2)");
}

Test(my_printf , string_with_modulo , .init = redirect_all_std)
{
    my_printf("my_printf can use %%d and %%b !", 12);
    cr_assert_stdout_eq_str("my_printf can use %d and %b !");
}

Test(my_pirntf , string_with_maj_hexadecimal_number , .init = redirect_all_std)
{
    my_printf("1211(10) = %X(16)", 1211);
    cr_assert_stdout_eq_str("1211(10) = 4BB(16)");
}
