/*
** basic_str.c for  in /home/cabaneg/rendu/Elem_prog/CPE_2015_corewar/asm/src/
**
** Made by Gabriel Cabanes
** Login   <cabane_g@epitech.eu>
**
** Started on  Wed Mar 23 18:50:36 2016 Gabriel Cabanes
** Last update Wed Mar 23 18:50:36 2016 Gabriel Cabanes
*/

#include "gab.h"

char	*get_str(char *line, int i)
{
  int	j;
  char	*str;

  j = 0;
  if ((str = malloc(sizeof(char) * my_strlen(line) + 1)) == NULL)
    raise_err("Can't ", "perform ", "malloc");
  while (line[i] && line[i] != DIRECT_CHAR && sub_cmp(line[i], LABEL_CHARS))
    i++;
  while (line[i] && line[i] != ' ' && line[i] != '\t')
    {
      str[j] = line[i];
      i++;
      j++;
    }
  str[j] = '\0';
  return (str);
}

char	*delete_label(char *line)
{
  int	i;
  int	j;
  char	*cpy;

  i = 0;
  j = 0;
  if ((cpy = malloc(sizeof(char) * my_strlen(line) + 1)) == NULL)
    raise_err("Can't ", "perform ", "malloc");
  while (line[i] && line[i] != DIRECT_CHAR && sub_cmp(line[i], LABEL_CHARS))
    i++;
  while (line[i] && line[i] != ' ' && line[i] != '\t')
    i++;
  while (line[i])
    {
      cpy[j] = line[i];
      j++;
      i++;
    }
  cpy[j] = '\0';
  return (cpy);
}

int	is_empty(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (!sub_cmp(str[i], LABEL_CHARS))
	return (0);
      i++;
    }
  return (1);
}
