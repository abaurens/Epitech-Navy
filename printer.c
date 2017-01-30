/*
** D:\Code\Epitech\navy\printer.c for navy in
**
** Made by Arthur Baurens
** Login   <arthur.baurens@epitech.eu>
**
** Started on  Mon Jan 30 17:25:18 2017 Arthur Baurens
** Last update Mon Jan 30 17:35:20 2017 Arthur Baurens
*/

#include <unistd.h>
#include <stdlib.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_numlen(int nbr)
{
  long	nb;
  int	ret;

  nb = nbr;
  ret = 0;
  if (nb < 0)
    {
      nb = -nb;
      ret++;
    }
  if (nb / 10 > 0)
    ret += my_numlen(nb / 10);
  return (ret + 1);
}

void	my_putnbr(int nbr)
{
  long	nb;

  nb = nbr;
  if (nb < 0)
    {
      write(1, "-", 1);
      nb = -nb;
    }
  if (nb / 10 > 0)
    my_putnbr(nb / 10);
  my_putchar(nb % 10 + '0');
}

void	padded_putnbr(int nbr, int pad)
{
  int	nbrsize;

  nbrsize = my_numlen(nbr);
  while (pad > nbrsize)
    {
      write(1, " ", 1);
      pad--;
    }
  my_putnbr(nbr);
}
