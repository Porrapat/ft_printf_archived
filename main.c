#include <stdio.h>
#include "ft_printf.h"

int main()
{
    printf("%s", NULL);
    // ft_printf("%s", NULL);
    printf("Hello World\n");
    // printf("%s\n", (char *)NULL);
    // printf("%d\n", ft_isalnum('\n'));
    // ft_putstr_fd("Hello\n", 1);
    ft_printf("Hello World %s\n", "Porrapat");
    ft_printf("Hello World %s\n", "Porrapat");

    ft_printf("Hello World %d\n", 1234);
    ft_printf("Hello World %d\n", -1234);

    ft_printf("Hello World %%%\n");
    ft_printf("Hello World %%%%\n");
}