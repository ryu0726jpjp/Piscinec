#include <string.h>
#include <stdio.h>

int main(void)
{

	char test[20] = "abcdefghijk";
	char *p;

	p = strstr(test,"fgh");

	printf("検索文字列が見つかった場所から表示→%s\n",p);
	


	return 0;
}