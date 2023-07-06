#include "main.h"

/**
 * substring_match - check if a substring after wildcard matches s1
 * @s1: one string
 * @s2: one string
 * @after_wldcd: placeholder for position right after wildcard
 * Return: 1 if matched, 0 if not
 */

int substring_match(char *s1, char *s2, char *after_wldcd)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (substring_match(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (substring_match(s1 + 1, s2 + 1, after_wldcd));
	else
		return (substring_match(s1 + 1, after_wldcd, after_wldcd));
}


/**
 * wildcmp - Function Entry
 * Description: A function that compares two strings
 * @s1: input value for s1
 * @s2: input value for s2
 * Return: 1 if the strings can be considered identical
 * otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (substring_match(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
