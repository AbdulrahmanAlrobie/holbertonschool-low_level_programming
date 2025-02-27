#include "main.h"

/**
 * _strncpy - Copies a string up to n characters.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 *
 * Description:
 * This function copies at most n characters from src into dest. If src
 * is shorter than n characters, the remaining bytes in dest are filled
 * with '\0'. If src is longer or equal to n, only n characters are copied,
 * and no additional null-byte is appended.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    /* Copy characters from src to dest until i reaches n or src ends */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    /* Fill the remaining space in dest with '\0' if needed */
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return (dest);
}

