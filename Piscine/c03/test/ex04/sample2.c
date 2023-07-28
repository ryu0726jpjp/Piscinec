#include <stdio.h>

char *my_strstr(const char *haystack, const char *needle) {
    if (*needle == '\0') {
        return (char *)haystack;  // needleが空文字列の場合、haystackをそのまま返す
    }
    
    while (*haystack) {
        const char *h = haystack;
        const char *n = needle;
        
        while (*n && *h && (*n == *h)) {
            n++;
            h++;
        }
        
        if (*n == '\0') {
            return (char *)haystack;  // needleが見つかった場合、haystackの位置を返す
        }
        
        haystack++;
    }
    
    return NULL;  // needleが見つからなかった場合、NULLを返す
}

int main(void) {
    const char *haystack = "Hello, world!";
    const char *needle = "world";
    
    char *result = my_strstr(haystack, needle);
    
    if (result) {
        printf("Needle found at position: %ld\n", result - haystack);
    } else {
        printf("Needle not found.\n");
    }
    
    return 0;
}
