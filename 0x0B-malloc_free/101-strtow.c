#include "main.h"
#include <stdlib.h>
/**
 * count_words - Counts the number of words in a given string.
 * @str: The string to count words from.
 * Return: The number of words in str.
 */
int count_words(char *str)
{
int numWords = 0;
int insideWord = 0;
while (*str)
{
if (*str == ' ')
insideWord = 0;
else if (!insideWord)
{
insideWord = 1;
numWords++;
}
str++;
}
return (numWords);
}
/**
 * allocate_words - Allocates memory for an array of words.
 * @wordCount: The number of words to allocate memory for.
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
char **allocate_words(int wordCount)
{
char **words;
words = malloc(sizeof(char *) * (wordCount + 1));
if (words == NULL)
return (NULL);
return (words);
}
/**
 * free_words - Frees the memory allocated for an array of words.
 * @words: The array of words to free.
 */
void free_words(char **words)
{
int i;
for (i = 0; words[i] != NULL; i++)
free(words[i]);
free(words);
}
/**
 * copy_word - Copies a word from one string to another.
 * @src: The string to copy the word from.
 * @dst: The string to copy the word to.
 * Return: The number of characters in the copied word.
 */
int copy_word(char *src, char *dst)
{
int length = 0;
while (*src != ' ' && *src != '\0')
{
*dst++ = *src++;
length++;
}
*dst = '\0';
return (length);
}
/**
 * strtow - Splits the given string into words separated by spaces.
 * @str: The string to split.
 * Return: A pointer to an array of words, or NULL on failure.
 */
char **strtow(char *str)
{
char **words;
int wordCount, idx1, idx2;
if (str == NULL || *str == '\0')
return (NULL);
wordCount = count_words(str);
words = allocate_words(wordCount);
if (words == NULL)
return (NULL);
for (idx1 = 0; idx1 < wordCount; idx1++)
{
while (*str == ' ')
str++;
idx2 = 0;
while (str[idx2] != ' ' && str[idx2] != '\0')
idx2++;
words[idx1] = malloc(sizeof(char) * (idx2 + 1));
if (words[idx1] == NULL)
{
free_words(words);
return (NULL);
}
copy_word(str, words[idx1]);
str += idx2;
}
words[wordCount] = NULL;
return (words);
}
