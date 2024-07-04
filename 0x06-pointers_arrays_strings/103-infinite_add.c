/**
 * infinite_add - adds two strings of digits
 * @a: first string
 * @b: second string
 * @res: buffer to store result
 * @size: size of buffer
 * Return: summed string or 0 if buffer too small
 */
char *infinite_add(char *a, char *b, char *res, int size)
{
    int c = 0, i = 0, j;
    char *p1 = a, *p2 = b;

    while (*p1 != 0)
        p1++;
    while (*p2 != 0)
        p2++;
    size--;
    res[size] = 0;
    p1--;
    p2--;
    while (p2 != b - 1 && p1 != a - 1)
    {
        res[i] = *p2 - '0' + *p1 + c;
        c = 0;
        if (res[i] > '9')
        {
            c++;
            res[i] -= 10;
        }
        i++;
        p2--;
        p1--;
        if (size == i && (p1 != a - 1 || p2 != b - 1 || c == 1))
            return (0);
    }
    while (p1 != a - 1)
    {
        res[i] = *p1 + c;
        c = 0;
        if (res[i] > '9')
        {
            c = 1;
            res[i] -= 10;
        }
        p1--;
        i++;
        if (size == i && (p1 != a - 1 ||  c == 1))
            return (0);
    }
    while (p2 != b - 1)
    {
        res[i] = *p2 + c;
        c = 0;
        if (res[i] > '9')
        {
            c = 1;
            res[i] -= 10;
        }
        p2--;
        i++;
        if (size == i && (p2 != b - 1 || c == 1))
            return (0);
    }
    if (c == 1)
    {
        res[i] = '1';
        res[i + 1] = 0;
    }
    else
    {
        res[i--] = 0;
    }
    j = 0;
    while (j <= i)
    {
        c = res[i];
        res[i] = res[j];
        res[j] = c;
        i--;
        j++;
    }
    return (res);
}

