#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len = strlen(dest);
    size_t src_len = strlen(src);
    size_t total_len = dest_len + src_len;

    if (size <= dest_len)
        return src_len + size;
        
    size_t space_left = size - dest_len - 1;
    
    strncat(dest, src, space_left);
    
    return total_len;
}

int main(void)
{
    char dest[20] = "Hello";
    const char *src = "World!aaaaaaaaaaaa";
    size_t n = sizeof(dest);
    
    size_t result = ft_strlcat(dest, src, n);
    printf("Result: %s\n", dest);
    printf("Result Length: %zu\n", result);
    
    return 0;
}