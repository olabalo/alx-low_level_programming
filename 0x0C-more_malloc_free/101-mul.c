#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _is_positive - checks if a number is positive
 * @num: the number to check
 *
 * Return: 1 if positive, 0 otherwise
 */
int _is_positive(char *num)
{
        if (*num == '-')
                return (0);
        while (*num)
        {
                if (!isdigit(*num))
                        return (0);
                num++;
        }
        return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
        int i, j, len1, len2, len_out, carry, sum;
        char *num1, *num2, *out;

        if (argc != 3 || !_is_positive(argv[1]) || !_is_positive(argv[2]))
        {
                printf("Error\n");
                return (98);
        }

        num1 = argv[1];
        num2 = argv[2];

        len1 = 0;
        while (num1[len1])
                len1++;
        len2 = 0;
        while (num2[len2])
                len2++;

        len_out = len1 + len2 + 1;
        out = malloc(sizeof(char) * len_out);
        if (!out)
        {
                printf("Error\n");
                return (98);
        }

        for (i = 0; i < len_out; i++)
                out[i] = '0';
        out[len_out - 1] = '\0';

        for (i = len1 - 1; i >= 0; i--)
        {
                carry = 0;
                for (j = len2 - 1; j >= 0; j--)
                {
                        sum = (num1[i] - '0') * (num2[j] - '0') + out[i + j + 1] - '0' + carry;
                        out[i + j + 1] = sum % 10 + '0';
                        carry = sum / 10;
                }
                if (carry)
                        out[i + j + 1] = carry + '0';
        }

        while (*out == '0' && *(out + 1))
                out++;

        printf("%s\n", out);

        free(out);

        return (0);
} 
