/*
** D:\Code\Epitech\navy\parser.c for navy in
**
** Made by Arthur Baurens
** Login   <arthur.baurens@epitech.eu>
**
** Started on  Mon Jan 30 15:58:14 2017 Arthur Baurens
** Last update Tue Jan 31 03:53:43 2017 Arthur Baurens
*/

# include <stdio.h>

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

char	parse_line(char *line, char **map)
{
  t_vec	v1;
  t_vec	v2;
  char	**data;


  printf("parsing line : %s\n", line);
  data = my_split(line, ':');
  /*
  if ((data)) == NULL)
    return (-1);

  printf("\tdata[0] : %s\n", data[0]);
  if (!is_num(data[0]))
    return (-printf("\t\t/!\\ Not a number !\n"));
  printf("\t\tOK\n");
  free(data[0]);

  printf("\tdata[1] : %s\n", data[1]);
  if (data[1] == NULL)
    return (-printf("\t\t/!\\ Missing data !\n"));
  if ((v1.x = indexof(ALPHA, data[1][0])) == str_len(ALPHA))
    return (-printf("\t\t/!\\ Invalid data !\n"));
  if (!is_num(&data[1][1]) || (v1.y = my_getnbr(&data[1][1])) <= 0)
    return (-printf("\t\t/!\\ Invalid data !\n"));
  printf("\t\tOK\n");
  free(data[1]);

  printf("\tdata[2] : %s\n", data[2]);
  if (data[2] == NULL)
    return (-printf("\t\t/!\\ Missing data !\n"));
  if ((v2.x = indexof(ALPHA, data[2][0])) == str_len(ALPHA))
    return (-printf("\t\t/!\\ Invalid data !\n"));
  if (!is_num(&data[2][1]) || (v2.y = my_getnbr(&data[2][1])) <= 0)
    return (-printf("\t\t/!\\ Invalid data !\n"));
  printf("\t\tOK\n");
  free(data[2]);
  */
  return (0);
}

char	**get_map(const char *name)
{
  int	fd;
  char	**map;
  char	*line;
  char	**data;

  if ((map = alloc_map()) == NULL)
    return (NULL);
  if ((fd = open(name, O_RDONLY)) < 0)
    return (NULL);
  while ((line = get_next_line(fd)))
    {
      parse_line(line, map);
      //free(line);
    }
  printf("\n\n\n\n\n");
  return (map);
}
