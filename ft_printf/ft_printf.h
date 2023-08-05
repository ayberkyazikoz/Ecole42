#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

void            ft_putcharacter_length(char character, int *length);
void            ft_string(char *args, int *length);
void            ft_number(int number, int *length);
void            ft_hexadecimal(unsigned int x, int *length, char x_or_x);
void            ft_unsigned_int(unsigned int u, int *length);
void            ft_pointer(size_t pointer, int *length);
int             ft_printf(const char *string, ...);

#endif