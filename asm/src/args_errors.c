/*
** args_errors.c for corewar in /home/nico/rendu/S02/ProgElem/CPE_2015_corewar/asm/src/
**
** Made by Nicolas Loriot
** Login   <loriot_n@epitech.net>
**
** Started on  Sat Mar 26 18:20:21 2016 Nicolas Loriot
** Last update Sat Mar 26 18:20:21 2016 Nicolas Loriot
*/

#include "nico.h"
#include "gab.h"
#include "label.h"

int	check_aff(char **params)
{
  if (params[0][0] == 'r' && is_good_reg(&params[0][1]))
    return (0);
  else
    return (1);
}

int	check_live(char **params)
{
  if (params[0][0] == DIRECT_CHAR && params[0][1] == LABEL_CHAR);
  else if (params[0][0] == DIRECT_CHAR);
  else if ((params[0][0] == DIRECT_CHAR) && (is_num(&params[0][1])))
    return (1);
  else
    return (0);
  return (1);
}

int	check_xor(char **params)
{
  int	j;

  j = 0;
  while (j < 2)
    {
      if (params[j][0] == DIRECT_CHAR);
      else if (params[j][0] == LABEL_CHAR);
      else if (params[j][0] == 'r' && is_good_reg(&params[j][1]));
      else if (is_num(&params[j][0]));
      else
	return (0);
      j++;
    }
  if (params[2][0] == 'r' && is_good_reg(&params[2][1]));
  else
    return (0);
  return (1);
}

int	send_arg_check(int code, char **params)
{
  if (code == 1 || code == 9 || code == 12 || code == 15)
    return (check_live(params));
  else if (code == 6 || code == 7 || code == 8)
    return (check_xor(params));
  else if (code == 4 || code == 5)
    return (check_add(params));
  else if (code == 10 || code == 14)
    return (check_ldi(params));
  else if (code == 11)
    return (check_sti(params));
  else if (code == 2 || code == 13)
    return (check_ld(params));
  else if (code == 16)
    return (check_aff(params));
  else if (code == 3)
    return (check_st(params));
  return (0);
}
