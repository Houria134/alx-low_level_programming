#include "main.h"
#include <stdlib.h>
/**
*argstostr - concatenates all program arguments.
*@ac: number of arguments
*@av: program arguments
*Return: pointer to concatenated arguments, NULL if failed
*/
char *argstostr(int ac, char **av)
{
int arg_idx, arg_len, total_len = 0, str_idx = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (arg_idx = 0; arg_idx < ac; arg_idx++)
{
for (arg_len = 0; av[arg_idx][arg_len] != '\0'; arg_len++)
total_len++;
total_len++;
}
str = malloc((total_len + 1) * sizeof(char));
for (arg_idx = 0; arg_idx < ac; arg_idx++)
{
for (arg_len = 0; av[arg_idx][arg_len] != '\0'; arg_len++)
{
str[str_idx] = av[arg_idx][arg_len];
str_idx++;
}
str[str_idx] = '\n';
str_idx++;
}
str[str_idx] = '\0';
return (str);
}
