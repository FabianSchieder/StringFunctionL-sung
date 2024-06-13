#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
size_t strlen(const char* string);
char* strcombine(char* a, char* b);

int main()
{
    char* str1 = "a";
    char* str2 = "bdfh";

    char* result = strcombine(str1, str2);

    printf("%s + %s = %s", str1, str2, result);
}

char* strcombine(char* a, char* b)
{
    unsigned int length = strlen(a) + strlen(b);
    char* c = malloc(length * sizeof(char) + 1);

    int i = 0;
    int j = 0;
    int x = 0;

    while(x < length)
    {
        if(a[i] != '\0')
        {
            c[x] = a[i];
            i++;
        }

        c[x + 1] = b[j];

        j++;
        x ++;
    }

    c[x] = '\0';

    return c;
}

size_t strlen(const char* string)
{
    int counter = 0;

    while (string[counter] != '\0')
    {
        counter++;
    }

    return counter;
}
