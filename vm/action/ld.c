/*
** ld.c for  in /home/stanislas/CPE_2015_corewar/vm/action
**
** Made by CUENAT
** Login   <stanislas@epitech.net>
**
** Started on  Wed Mar 23 19:48:01 2016 CUENAT
** Last update Wed Mar 23 22:53:31 2016 CUENAT
*/

#include "include.h"

t_champion	*ft_ld(t_champion *ch,
		       char *info,
		       int args[MAX_ARGS_NUMBER],
		       t_corewar *vm)
{
  int	i;
  int	j;
  int	k;

  (ch->carry == 1) ? ch->carry = 0 : ch->carry = 1;
  ch->action->reg_addr = args[1] - 1;
  i = (ch->pc + (arg[0] % IDX_MOD));
  j = i + REG_SIZE;
  if ((ch->action.reg_write = malloc(sizeof(char) * (j - i + 1))) == NULL)
    exit(EXIT_FAILURE);
  if (info[0] == 'I')
    ch->action->reg_write = mem_reg(i, j, vm);
  else
    ch->action->reg_write = arg[0];
  ch->cycle_attente = op_tab[1].nbr_cycles;
  return (ch);
}