/*
** init_vm.c for  in /home/stanislas/CPE_2015_corewar/vm
**
** Made by CUENAT
** Login   <stanislas@epitech.net>
**
** Started on  Tue Mar 22 13:32:55 2016 CUENAT
** Last update Tue Mar 22 13:44:45 2016 CUENAT
*/

#include "include.h"

void	ft_init_memory(char memory[MEM_SIZE])
{
  int	i;

  i = 0;
  while (i < MEM_SIZE)
    {
      memory[i] = 0;
      i++;
    }
}

t_corewar	*ft_init_vm(void)
{
  t_corewar	*vm;

  if ((vm = malloc(sizeof(t_corewar) * 1)) ==  NULL)
    exit(EXIT_FAILURE);
  ft_init_memory(vm->memory);
  vm->nb_cycle = 0;
  vm->nb_live = 0;
  vm->cycle_cpt = 0;
  vm->cycle_die = CYCLE_TO_DIE - (CYCLE_DELTA * vm->nb_cycle);
  return (vm);
}