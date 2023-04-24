#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

/**
 * struct conversion - handle conversion specifiers
 * @format: pointer to character
 * @f: pointer to function
 *
 * Description: produce output according to a format
 */

typedef struct conversion
{
	char *format;
	int (*f)(va_list);
} Conversion;

int _printf(const char *format, ...);
int handle_c(va_list val);
int handle_s(va_list val);
int handle_d(va_list val);
int handle_i(va_list val);
int handle_b(va_list val);
int handle_u(va_list val);
int handle_o(va_list val);
int handle_x(va_list val);
int handle_X(va_list val);
int handle_S(va_list val);
int handle_p(va_list val);
int handle_r(va_list val);
int handle_R(va_list val);

int print_buffer(const char *format, Conversion *con, va_list arg);
void _write(const char *format, int *n);
int handel_fun(const char *format, Conversion *con, int CON_LEN,
	int *char_printed, void (*_write)(const char *, int *), va_list arg);

#endif /* #ifndef MAIN_H */
