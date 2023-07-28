#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		char *s = str;
		char *t = to_find;
		while (*s && *t && (*s == *t))
		{
			s++;
			t++;
		}
		if (*t == '\0')
			return (*&s);
		str++;
	}
	return NULL;
}

int main(void)
{
	char test[20] = "abcdefghijk";
	char *p;
	p = ft_strstr(test, "fgh");
	printf("%s\n", p);
}