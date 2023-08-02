#include "ft_printf.h"

int ft_fchar(char c, t_flags *flags)
{
    char    *temp;

    if (flags->minfw > 1)
    {
        if (flags->flag_minus)
            ft_putchar_fd(c, 1);
        temp = ft_getprefix(' ', flags->minfw - 1);
        ft_putstr_fd(temp, 1);
        free(temp);
        if (!flags->flag_minus)
            ft_putchar_fd(c, 1);
        return (flags->minfw);
    }
    else
        ft_putchar_fd(c, 1);
    return (1);
}