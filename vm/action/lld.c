/*
** lld.c for  in /home/stanislas/CPE_2015_corewar/vm/action
**
** Made by CUENAT
** Login   <stanislas@epitech.net>
**
** Started on  Thu Mar 24 16:03:59 2016 CUENAT
** Last update Fri Mar 25 19:02:09 2016 CUENAT
*/

#include "include.h"

t_champion	*ft_lld(t_champion *ch,
			char *info,
			int args[MAX_ARGS_NUMBER],
			t_corewar *vm)
{
  int   i;
  int   j;
  int   k;

  (ch->carry == 1) ? (ch->carry = 0) : (ch->carry = 1);
   ch->action->reg_addr = args[1] - 1;
   i = (ch->pc + args[0]);
   j = i + REG_SIZE;
   if (info[0] == 'I')
     ch->action->reg_write = ft_mem_reg(i, j, vm);
   else
     ch->action->reg_write = args[0];
   ch->cycle_attente = op_tab[1].nbr_cycles;
   return (ch);
}
