/*
** D:\Code\Epitech\navy\map_gestioner.c for navy in
**
** Made by Arthur Baurens
** Login   <arthur.baurens@epitech.eu>
**
** Started on  Mon Jan 30 16:46:35 2017 Arthur Baurens
** Last update Mon Jan 30 17:56:10 2017 Arthur Baurens
*/

#include <unistd.h>
#include <stdlib.h>
#include "navy.h"

void	display_map(char **map)
{
  int	i;
  int	j;

  i = -1;
  while (++i <= my_numlen(MAP_SIZE) && (j = -1))
    my_putchar(i == my_numlen(MAP_SIZE) ? '|' : ' ');
  while (++j < MAP_SIZE && (i = -1))
    {
      my_putchar('A' + j);
      my_putchar(j + 1 == MAP_SIZE ? '\n' : ' ');
    }
  while (++i <= my_numlen(MAP_SIZE) && (j = -1))
    my_putchar(i == my_numlen(MAP_SIZE) ? '+' : '-');
  while (++j < MAP_SIZE && (i = -1))
    write(1, j + 1 == MAP_SIZE ? "-\n" : "--", 2);
  while (map && map[++i] && (j = -1))
    {
      padded_putnbr(i + 1, my_numlen(MAP_SIZE));
      my_putchar('|');
      while (map[i][++j])
	    {
	      write(1, &map[i][j], 1);
	      write(1, j + 1 < MAP_SIZE ? " " : "\n", 1);
	    }
    }
}

void	*free_map(char **map)
{
  int	i;

  i = -1;
  while (map && map[++i])
    free(map[i]);
  free(map);
  return (NULL);
}
