/*
** D:\Code\Epitech\navy\parser.c for navy in
**
** Made by Arthur Baurens
** Login   <arthur.baurens@epitech.eu>
**
** Started on  Mon Jan 30 15:58:14 2017 Arthur Baurens
** Last update Mon Jan 30 16:38:24 2017 Arthur Baurens
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "navy.h"

static char	**alloc_map()
{
  int		i;
  int		j;
  char		**map;

  i = -1;
  if ((map = malloc(sizeof(char *) * (MAP_SIZE + 1))) == NULL)
    return (NULL);
  map[MAP_SIZE] = NULL;
  while (++i < MAP_SIZE)
    {
      j = -1;
      if ((map[i] = malloc(sizeof(char) * (MAP_SIZE + 1))) == NULL)
	    {
		  while (--i >= 0)
	        free(map[i]);
	      free(map);
	      return (NULL);
	  }
      while (++j < MAP_SIZE)
	    map[i][j] = '.';
      map[i][MAP_SIZE] = '\0';
    }
  return (map);
}

char	**get_map(const char *name)
{
  int	fd;
  char	**map;
  char	*line;

  if ((fd = open(name, O_RDONLY)) < 0)
    return (NULL);
  map = alloc_map();
  while ((line = get_next_line(fd)))
    {
      free(line);
    }
  return (map);
}
