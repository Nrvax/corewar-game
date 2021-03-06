/*
** str_compare.c for corewar in /home/nico/rendu/S02/ProgElem/CPE_2015_corewar/asm/src
**
** Made by Nicolas Loriot
** Login   <loriot_n@epitech.net>
**
** Started on  Wed Mar 23 15:12:49 2016 Nicolas Loriot
** Last update Wed Mar 23 16:01:06 2016 Nicolas Loriot
*/

#include "gab.h"
#include "nico.h"

int	cmp_instruction(char *str, int yolo)
{
  if (!yolo)
    {
      if (!my_strcmp(str, "sti") || !my_strcmp(str, "ldi") ||
	  !my_strcmp(str, "lldi"))
	return (7);
      if (!my_strcmp(str, "lfork") || !my_strcmp(str, "zjmp") ||
	  !my_strcmp(str, "fork"))
	return (3);
    }
  if (yolo)
    {
      if (!my_strcmp(str, "sti") || !my_strcmp(str, "ldi") ||
	  !my_strcmp(str, "lldi"))
	return (5);
      if (!my_strcmp(str, "lfork") || !my_strcmp(str, "zjmp") ||
	  !my_strcmp(str, "fork"))
	return (2);
    }
  return (0);
}

int	label_here(char *line)
{
  int	i;

  i = 0;
  while (line[i])
    {
      if (line[i] == LABEL_CHAR && sub_cmp(line[i + 1], LABEL_CHARS))
	return (0);
      i++;
    }
  return (1);
}

int	sub_cmp(char c, char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i++] == c)
	return (0);
    }
  return (1);
}

int	my_strcmp(char *s1, char *s2)
{
  if (s1 == NULL || s2 == NULL)
    return (42);
  while ((*s1 != '\0') && (*s2 != '\0'))
    {
      if (*s1 != *s2)
	return (-1);
      s1++;
      s2++;
    }
  if ((*s1 == '\0') && (*s2 == '\0'))
    return (0);
  if (*s2 == '\0')
    return (1);
  return (1);
}

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
