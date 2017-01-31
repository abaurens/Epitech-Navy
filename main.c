/*
** D:\Code\Epitech\navy\main.c for navy in
**
** Made by Arthur Baurens
** Login   <arthur.baurens@epitech.eu>
**
** Started on  Mon Jan 30 15:12:37 2017 Arthur Baurens
** Last update Tue Jan 31 02:49:26 2017 Arthur Baurens
*/

#include <stdlib.h>
#include <unistd.h>
#include "navy.h"

int	print_usage()
{
  write(1, "USAGE\n", 6);
  write(1, "\t./navy [first_player_pid] navy_positions\n", 42);
  write(1, "\nDESCRIPTION\n", 13);
  write(1, "\tfirst_player_pid\tonly for the 2nd player.  pid of the first player,\n", 52 + 17);
  write(1, "\tnavy_positions\t\tfile representing the positions of the ships.\n", 16 + 47);
  return (0);
}

int		main(int ac, char **av)
{
  char	**map;

  if (ac < 2 || ac > 3)
    return (84);
  if (my_strcmp(av[1], "-h") == 0)
    return (print_usage());
  map = get_map(av[ac - 1]);
  display_map(map);
  return (0);
}
