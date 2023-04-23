/**
 * handle_hash - handle #
 * @format: string
 * @char_printed: int
 */

void handle_hash(const char **format, int *char_printed)
{
/*	_write(*format, char_printed);*/
	(void)char_printed;
	*format += 1;
	while (*(*format + 1) == '#')
		*format += 1;
	if (*(*format + 1) == '%')
		*format += 2;
}

