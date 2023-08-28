/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing acceptable characters.
 *
 * Description: This function calculates the length of the initial
 * segment ofstring s that consists only of characters present in
 * the string accept.
 *
 * Return: The number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s != '\0')
	{
		found = 0;

		for (char *a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}

