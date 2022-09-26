#include "main.h"
/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int x, y;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; input[y] != '\0'; y++)
		{
			if (s[x] == input[y])
			{
				s[x] = output[y];
				break;
			}
		}
	}
	return (str);
}
