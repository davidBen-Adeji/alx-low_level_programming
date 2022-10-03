#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}


/**
 * _islower - function to check for lower case characters.
 * @c: The parameter
 * Return: 1 if lowercase, 0 if otherwise
 */

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);

    return (0);
}

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);

    return (0);
}

/**
 *_abs - Check Holberton
 * @r: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number r
 */
int _abs(int r)
{
    if (r >= 0)
        return (r);
    else
        return (r * -1);
}

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
    char uppercase = 'A';
    int isupper = 0;

    for (; uppercase <= 'Z'; uppercase++)
    {
        if (c == uppercase)
        {
            isupper = 1;
            break;
        }
    }

    return (isupper);
}

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: An input integer
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
    char i = '0';
    int isdigit = 0;

    for (; i <= '9'; i++)
    {
        if (i == c)
        {
            isdigit = 1;
            break;
        }
    }

    return (isdigit);
}

/**
 * _strlen -  a function that returns the length of a string.
 * @s: An input string
 * Return: Nothing
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;
    return (len);
}

/**
 * _puts - Write a function that prints a string, followed
 * by a new line, to stdout.
 * @str: an input string
 * Return: Nothing
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    char *aux = dest;

    while (*src)
        *dest++ = *src++;
    return (aux);
}

/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 * Return: integer from conversion
 */
int _atoi(char *s)
{
    int sign = 1;
    unsigned int total = 0;
    char null_flag = 0;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;

        if (*s >= '0' && *s <= '9')
        {
            null_flag = 1;
            total = total * 10 + *s - '0';
        }

        else if (null_flag)
            break;
        s++;
    }

    if (sign < 0)
        total = (-total);

    return (total);
}

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
    char *temp = dest;

    while (*dest)
        dest++;

    while (*src)
        *dest++ = *src++;

    *dest = '\0';
    return (temp);
}

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
    int srclen = 0, i = 0;
    char *temp = dest, *start = src;

    while (*src)
    {
        srclen++;
        src++;
    }

    while (*dest)
        dest++;

    if (n > srclen)
        n = srclen;

    src = start;

    for (; i < n; i++)
        *dest++ = *src++;

    *dest = '\0';
    return (temp);
}

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
    int srclen = 0, i = 0;
    char *temp = dest, *start = src;

    while (*src)
    {
        srclen++;
        src++;
    }

    srclen++;

    if (n > srclen)
        n = srclen;

    src = start;

    for (; i < n; i++)
        *dest++ = *src++;

    return (temp);
}

/**
 * _strcmp - a function that compares two strings.
 * @s1: an input string
 * @s2: an input string
 * Return: The difference s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++, s2++;
    }
    return (*s1 - *s2);
}

/**
 * _memset - a function that fills memory with constant bytes
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *start = s;

    while (n--)
    {
        *s = b;
        s++;
    }
    return (start);
}

/**
 * _memcpy - a function that copys memory area
 * @dest: memory area destination to copy
 * @src: memory area source to copy from
 * @n: number of bytes
 * Return: returns pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *start = dest;

    while (n--)
    {
        *dest = *src;
        src++;
        dest++;
    }
    return (start);
}

/**
 * _strchr - a function that locates a character in a string.
 * @s: an input string to search in
 * @c: an input character to locate into string s
 * Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{

    while (*s)
    {
        if (c == *s)
            return (s);
        s++;
    }
    if (c == *s)
        return (s);
    return (NULL);
}

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
    int count = 0, flag;
    char *start = accept;

    while (*s)
    {
        flag = 0;
        while (*accept)
        {
            if (*accept == *s)
            {
                count++;
                flag = 1;
                break;
            }
            accept++;
        }
        s++;
        accept = start;
        if (flag == 0)
            break;
    }
    return (count);
}

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return:  a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    char *start = accept;

    while (*s)
    {
        while (*accept)
        {
            if (*accept == *s)
                return (s);
            accept++;
        }

        accept = start;
        s++;
    }
    return (NULL);
}

/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    char *startn = needle, *starth = haystack;

    while (*haystack)
    {
        starth = haystack;
        needle = startn;
        while (*haystack == *needle)
        {
            haystack++;
            needle++;
        }

        if (*needle == '\0')
            return (haystack);
        haystack = starth + 1;
    }
    return (NULL);
}
