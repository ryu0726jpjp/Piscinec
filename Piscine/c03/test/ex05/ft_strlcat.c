#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest[20];
    const char *src = "world!";
    int number = 123;
    
    // 文字列のフォーマットと整数の埋め込み
    int result = snprintf(dest, sizeof(dest), "Hello, %s %d", src, number);
    
    printf("Result: %s\n", dest);  // Output: Hello, world! 123
    printf("Result Length: %d\n", result);  // Output: 18
    
    return 0;
}